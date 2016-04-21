//
// Created by Mitchell Wong on 4/21/16.
//

#ifndef GROUNDGAME_CLIENT_MZEXPORT_H
#define GROUNDGAME_CLIENT_MZEXPORT_H

// Define MZ_EXPORT as the external declaration specifier
// MZ_BUILDING_MZ is defined only when building sources for this library

#if TARGET_OS_WIN32 && defined(BUILD_SHARED_LIBS)
#ifdef MZ_BUILDING_MZ
		#define MZ_LINKAGE __declspec(dllexport)
	#else
		#define MZ_LINKAGE __declspec(dllimport)
	#endif
#else
 #define MZ_LINKAGE
#endif

#ifdef __cplusplus
 #define MZ_EXPORT extern "C" MZ_LINKAGE
 #define MZ_EXPORT_CPP extern MZ_LINKAGE
#else
 #define MZ_EXPORT extern MZ_LINKAGE
#endif

#endif //GROUNDGAME_CLIENT_MZEXPORT_H
