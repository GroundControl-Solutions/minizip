//
//  error.c
//  minizip
//
//  Created by Jeremy Agostino on 5/26/15.
//  Copyright (c) 2015 Tekserve. All rights reserved.
//

#include "error.h"
#include "unzip.h"
#include "zip.h"

#include <CFExtension/CFExtension.h>

CFStringRef const zipErrorDomain = CFSTR("minizip.zipErrorDomain");

#define Z_STREAM_END    1
//#define Z_NEED_DICT     2
#define Z_ERRNO        (-1)
#define Z_STREAM_ERROR (-2)
#define Z_DATA_ERROR   (-3)
#define Z_MEM_ERROR    (-4)
#define Z_BUF_ERROR    (-5)
#define Z_VERSION_ERROR (-6)

CF_EXPORT CFStringRef
zipGetErrorString(int zipError)
{
	switch (zipError) {

//		case ZIP_OK:
//		case ZIP_EOF:
//		case UNZ_OK:
//		case UNZ_EOF:
		case Z_OK:
			return CFSTR("");

		case UNZ_END_OF_LIST_OF_FILE:
			return CFSTR("End of list file");

//		case ZIP_PARAMERROR:
		case UNZ_PARAMERROR:
			return CFSTR("Invalid argument");

//		case ZIP_BADZIPFILE:
		case UNZ_BADZIPFILE:
			return CFSTR("Invalid zip file");

//		case ZIP_INTERNALERROR:
		case UNZ_INTERNALERROR:
			return CFSTR("Internal error");

		case UNZ_CRCERROR:
			return CFSTR("CRC check error");

		case Z_STREAM_ERROR:
			return CFSTR("Stream error");

		case Z_DATA_ERROR:
			return CFSTR("Data error");

		case Z_MEM_ERROR:
			return CFSTR("Memory error");

		case Z_BUF_ERROR:
			return CFSTR("Buffer error");

		case Z_VERSION_ERROR:
			return CFSTR("Version error");

//		case ZIP_ERRNO:
//		case UNZ_ERRNO:
		case Z_ERRNO:
			// Should've checked errno
		default:
			return CFSTR("Unknown error");
	}
}

CF_EXPORT CFErrorRef
zipCreateError(int zipError)
{
	CFStringRef desc;
	if (zipError == Z_ERRNO) {
		desc = CFStringCreateWithCStringNoCopy(kCFAllocatorDefault, strerror(errno), kCFStringEncodingASCII, kCFAllocatorNull);
	}
	else {
		desc = CFRetain(zipGetErrorString(zipError));
	}

	CFErrorRef retval = CFErrorCreateWithFormat(kCFAllocatorDefault, zipErrorDomain, (CFIndex)zipError, desc, NULL, NULL);
	CFRelease(desc);
	return retval;
}
