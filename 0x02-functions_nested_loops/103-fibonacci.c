#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	int t1 = 1;
	int t2;
	int sum = 0;

	while (i <= 4000000)
	{
		printf("%d\n", sum);
		sum += i;
		t2 = i + t1;
		t1 = t2;
	}
	printf("\n%d", sum);
	return (0);
}
