#include <stdlib.h>
#include <stdio.h>
#include "../include/apidisk.h"
#include "../include/t2fs.h"

int main()
{	
	char buffer[256];

	read_sector(0,buffer);
	puts(buffer);

	return 0;
}
