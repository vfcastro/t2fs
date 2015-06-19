#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/apidisk.h"
#include "../include/t2fs.h"
#define SUCCESS 0
#define ERROR -1

struct t2fs_superbloco SUPERBLOCK;

/** Informa a identificação dos desenvolvedores do T2FS. */
int identify2 (char *name, int size)
{
	char id[] = "Nome: Vinicius Fraga de Castro\nCartao: 193026";
	strncpy(name,id,size);
	name[size-1] = '\0'; //Ultimo byte deve ser terminador de string
	return SUCCESS;
}



/**
#############################
##  Funções auxiliares     ## 
#############################
*/
int read_superblock ()
{
	char buffer[SECTOR_SIZE];
	if(read_sector(0,buffer) != SUCCESS) //Leitura do setor 0 (superbloco)
		return ERROR;

	memcpy(&SUPERBLOCK,&buffer,sizeof(struct t2fs_superbloco));
	return SUCCESS;
}

void bla()
{	
	char buffer[SECTOR_SIZE];
	struct t2fs_inode inode;

	printf("%d\n",((SUPERBLOCK.InodeBlock-1)*(SUPERBLOCK.BlockSize))/SECTOR_SIZE);
	read_sector(((SUPERBLOCK.InodeBlock-1)*(SUPERBLOCK.BlockSize))/SECTOR_SIZE,buffer);
	memcpy(&inode,&buffer,sizeof(struct t2fs_inode));
	printf("%d\n",inode.dataPtr[8]);

}







