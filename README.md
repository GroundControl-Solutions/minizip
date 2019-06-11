This is the very old, somewhat broken fork of minizip that we were using for a while. It's been superseded by a new upstream that's actively maintained.

# Minizip

A simple software package for reading from and writing to zip archives. Depends on libz.

Original source: [http://www.winimage.com/zLibDll/minizip.html]

##

MiniZip - Copyright (c) 1998-2010 - by Gilles Vollant - version 1.1 64 bits from Mathias Svensson

Introduction
---------------------
MiniZip 1.1 is built from MiniZip 1.0 by Gilles Vollant ( http://www.winimage.com/zLibDll/minizip.html )

When adding ZIP64 support into minizip it would result into risk of breaking compatibility with minizip 1.0.
All possible work was done for compatibility.


Background
---------------------
When adding ZIP64 support Mathias Svensson found that Even Rouault have added ZIP64 
support for unzip.c into minizip for a open source project called gdal ( http://www.gdal.org/ )

That was used as a starting point. And after that ZIP64 support was added to zip.c
some refactoring and code cleanup was also done.


Changed from MiniZip 1.0 to MiniZip 1.1
---------------------------------------
* Added ZIP64 support for unzip ( by Even Rouault )
* Added ZIP64 support for zip ( by Mathias Svensson )
* Reverted some changed that Even Rouault did.
* Bunch of patches received from Gulles Vollant that he received for MiniZip from various users.
* Added unzip patch for BZIP Compression method (patch create by Daniel Borca)
* Added BZIP Compress method for zip
* Did some refactoring and code cleanup


Credits

 Gilles Vollant    - Original MiniZip author
 Even Rouault      - ZIP64 unzip Support
 Daniel Borca      - BZip Compression method support in unzip
 Mathias Svensson  - ZIP64 zip support
 Mathias Svensson  - BZip Compression method support in zip

 Resources

 ZipLayout   http://result42.com/projects/ZipFileLayout
             Command line tool for Windows that shows the layout and information of the headers in a zip archive.
             Used when debugging and validating the creation of zip files using MiniZip64


 ZIP App Note  http://www.pkware.com/documents/casestudies/APPNOTE.TXT
               Zip File specification


Notes.
 * To be able to use BZip compression method in zip64.c or unzip64.c the BZIP2 lib is needed and HAVE_BZIP2 need to be defined.

License
----------------------------------------------------------
   Condition of use and distribution are the same than zlib :

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

----------------------------------------------------------
