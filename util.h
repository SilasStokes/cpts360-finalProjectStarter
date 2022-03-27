#ifndef UTIL
#define UTIL
// C Libs:
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ext2fs/ext2_fs.h>
#include <string.h>
#include <libgen.h>
#include <sys/stat.h>
#include <time.h>
// these have lseek, found them by doing man lseek
#include <sys/types.h>
#include <unistd.h>


// USR
#include "type.h"
#include "globals.h"


/*********** util.c file ****************/


// #include "type.h"

// optional comment style - you do you boo boo
/** @brief 
 *         
 *         
 *  @param dev 
 *  @param blk
 *  @param buf    
 *  @return Void.
 */
int get_block(int dev, int blk, char *buf);

int put_block(int dev, int blk, char *buf);

int tokenize(char *pathname);

// return minode pointer to loaded INODE
MINODE *iget(int dev, int ino);

void iput(MINODE *mip);

int getino(char *pathname);

// These 2 functions are needed for pwd()
int findmyname(MINODE *parent, u32 myino, char myname[]);

int findino(MINODE *mip, u32 *myino);

#endif