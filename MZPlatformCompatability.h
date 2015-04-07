//
// Created by mitchell on 3/20/2015.
//

#ifndef _GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_
#define _GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_

#ifdef __MINGW32__ //Windows under gcc
//#define __declspec(a) //Windows has problems with __declspec, so do nothing
#define ftello ftell
#define fseeko fseek
#endif

#ifdef __APPLE__ //Mac OSX
#endif

#ifdef __LINUX__ //Linux
//Not currently a build target
#endif

#endif //_GROUNDGAME_CLIENT_MZPLATFORMCOMPATABILITY_PCH_
