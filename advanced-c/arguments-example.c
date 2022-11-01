#include <stdio.h>

int main(int argc, char **argv)
{
	int x;

	printf("There were %d command line arguments\n",argc);
	printf("This program is named '%s' \n", argv[0]);

	for(x=0; x<argc; x++)
		printf("%2d: %s\n", x+1, argv[x]);

	return(0);
}

