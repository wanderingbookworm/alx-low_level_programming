#include <stdio.h>
/*
 * main - entry point
 * return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n",
sizeof(char));
	printf("Size of an int: %ld byte(s)\n",
sizeof(int));
	printf("Size of a long int: %ld byte(s)\n",
sizeof(long int));
	printf("Size of a long long int %i byte(s)\n"
sizeof(long long int));
	printf("Size of a float: %i byte(s)\n"
sizeof(float));
	return (0);
}
