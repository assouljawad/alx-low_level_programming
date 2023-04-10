#include <stdio.h>
#include <stdlib.h>
/**
* main - returns 0
* @argc: lenght
* @argv: arry of arguments
* Return: return 0
*/
int main(int argc, char **argv)
{
	int rs;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc > 3 || argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		rs = num1 * num2;
		printf("%d\n", rs);
	}
	return (0);
}
