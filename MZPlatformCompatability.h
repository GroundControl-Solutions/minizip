//
// Created by mitchell on 3/20/2015.
//

#ifndef _GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_
#define _GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_

#ifdef __MINGW32__ //Windows under gcc
#include <stdio.h>
#ifdef __MINGW64_VERSION_MAJOR
#define ftello ftello64
#define fseeko fseeko64
#else
#include <io.h>

//#define __declspec(a) //Windows has problems with __declspec, so do nothing
static inline __int64 ftello(FILE *f) {
	return _telli64(_fileno(f));
}

static inline __int64  fseeko(FILE *f, __int64 off, int whence)
{
	return _lseeki64(_fileno(f), off, whence)==-1 ? -1 : 0;
}
#endif
#endif

#ifdef __APPLE__ //Mac OSX
#endif

#ifdef __LINUX__ //Linux
//Not currently a build target
#endif

#endif //_GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_
