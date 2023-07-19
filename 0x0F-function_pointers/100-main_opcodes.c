#include<stdio.h>
#include<stdlib.h>
/**
*  main- Entry point
*  @argc: the number of parameters.
*  @argv: the parameeters in the case the number of bytes.
*  Description: this program prints opcodes in hexa)
*  Return: 0 in succes
*/

int main(int argc, char *argv[])
{
	int i, n;
	
    if (argc != 2) 
	{
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);
    if (num_bytes <= 0) 
	{
        printf("Error\n");
        return 2;
    }

    unsigned char *start = (unsigned char *)&main;
    print_opcodes(start, num_bytes);

    return 0;
}
