#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/apidisk.h"
#include "../include/t2fs.h"
#define SUCESS 0

int identify2 (char *name, int size)
{
	char id[] = "Nome: Vinicius Fraga de Castro\nCartao: 193026";
	strncpy(name,id,size);
	name[size-1] = '\0'; //Last byte must be null terminated.
	return SUCESS;
}



