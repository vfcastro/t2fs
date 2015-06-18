#include <stdlib.h>
#include <stdio.h>
#include "../include/t2fs.h"

int main()
{	
	char buffer[256];
	
	identify2(buffer,256);
	puts(buffer);

	return 0;
}
