#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int i;
	int t1 = 0;
	int t2 = 1;
	int nextTerm = t1 + t2;

	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
