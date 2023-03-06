#include "main.h"

/**
 * main - test function for pos or neg numbers
 * Return: always 0
 */

#include <stdio.h>

void check_sign(int num)
{
		if (num >= 0)
		{
			printf("The integer is positive\n");
		else
		{
			printf("The integer is negative\n");
		}
		}
		int main()
		{
			int number = -5;
			check_sign(number);
			return 0;
}
