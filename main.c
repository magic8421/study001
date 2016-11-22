#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	for(i = 0; i < argc; i ++)
	{
		if (strcmp(argv[i], "-d") == 0)
		{
		}
	}
	printf("hello world\n");
	return 0;
}
