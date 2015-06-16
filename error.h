//
//  error.h
//  minizip
//
//  Created by Jeremy Agostino on 5/26/15.
//  Copyright (c) 2015 Tekserve. All rights reserved.
//

#ifndef __minizip__unzerror__
#define __minizip__unzerror__

#include <CoreFoundation/CoreFoundation.h>
#include <zconf.h>

ZEXPORT CFStringRef const zipErrorDomain;

ZEXPORT CFStringRef
zipGetErrorString(int unzError);

ZEXPORT CFErrorRef
zipCreateError(int unzError);

#endif /* defined(__minizip__unzerror__) */
