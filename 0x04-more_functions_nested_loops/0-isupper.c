#include "main.h"

/**
 *_isupper - checks if a parameter ia an uppercase
 *@c: input character
 *Return: 1 if uppercase  and 0 if lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
