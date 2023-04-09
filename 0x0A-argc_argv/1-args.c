#include <stdio.h>
/**
* main - returns 0
* @argc: lenght
* @argv: arry of arguments
* Return: return 0
*/
int main(int argc, char **argv)
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
