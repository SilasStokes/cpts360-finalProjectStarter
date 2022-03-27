#ifndef CD_LS_PWD
#define CD_LS_PWD
// C LIBS:
#include "stdio.h"
#include "string.h"

// USR
#include "type.h"
#include "globals.h"
#include "util.h"


/************* cd_ls_pwd.c file **************/
int cd();

int ls_file(MINODE *mip, char *name);

int ls_dir(MINODE *mip);

int ls();

void pwd(MINODE *wd);



#endif