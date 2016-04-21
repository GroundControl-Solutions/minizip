//
//  error.h
//  minizip
//
//  Created by Jeremy Agostino on 5/26/15.
//  Copyright (c) 2015 Tekserve. All rights reserved.
//

#ifndef MINIZIP_UNZERROR_H
#define MINIZIP_UNZERROR_H

#include <minizip/mzexport.h>
#include <CoreFoundation/CoreFoundation.h>

MZ_EXPORT CFStringRef const zipErrorDomain;

MZ_EXPORT CFStringRef
zipGetErrorString(int unzError);

MZ_EXPORT CFErrorRef
zipCreateError(int unzError);

#endif /* defined(MINIZIP_UNZERROR_H) */
