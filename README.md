# cpts360-finalProjectStarter
LoOk MoM No ErRoRs

## Summary of what I did:
- Source didn't have all the corrected header files included. For example: `lseek()` is in 'sys/types.h' and 'unistd.h' so I added those
- Separated all function headers into `functions.h`. Now in all new files created you just need to '#include "functions.h"' to get access to random funcs like `iget()`.
- Added all globals to `globals.h`, this avoids the extern keywords 
- Added header guards to everything.
- changed the bash script to compile with `gcc *.c`. 

This is by no means the correct way. Just the way my partner and I did it. I have no idea. I am not a professional. There is no implied warranty. If this bricks your computer all I have is condolences and my office hours (11-12p Sunday).

## Common Problems:
- If you're getting an error on INODE in type.h that says something like "incomplete type", just include `#include <ext2fs/ext2_fs.h>` at the top. 
- If your computer isn't happy with that above include statement, try `sudo apt-get install e2fslibs-dev` to install the libraries.
