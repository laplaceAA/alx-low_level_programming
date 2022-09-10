#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{

	char vam = 'a';
	while (vam <= 'z');
	{
		printf("%c\n", vam);
		vam++;
	}

	return (0);

}
