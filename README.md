# cpts360-finalProjectStarter
LoOk MoM No ErRoRs

## Summary of what I did:
- Source didn't have all the corrected header files included. For example: `lseek()` is in 'sys/types.h' and 'unistd.h' so I added those
- Separated all function headers into `functions.h`. Now in all new files created you just need to '#include "functions.h"' to get access to random funcs like `iget()`.
- Added all globals to `globals.h`, this avoids the extern keywords 
- Added header guards to everything.
- changed the bash script to compile with `gcc *.c`. 

This is by no means the correct way. Just the way my partner and I did it. I have no idea. I am not a professional. There is no implied warranty. If this bricks your computer all I have is condolences. 

