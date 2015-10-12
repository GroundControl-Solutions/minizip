//
// Created by mitchell on 3/20/2015.
//

#ifndef _GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_
#define _GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_

#ifdef __MINGW32__ //Windows under gcc
#include <stdio.h>
#define ftello ftello64
#define fseeko fseeko64
#endif

#ifdef __APPLE__ //Mac OSX
#endif

#ifdef __LINUX__ //Linux
//Not currently a build target
#endif

#endif //_GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_
