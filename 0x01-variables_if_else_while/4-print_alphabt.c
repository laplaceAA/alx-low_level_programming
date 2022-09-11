#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char vim ='a';
	for (; vim <= 'z'; vim++)
	{
		if (vim != 'e' && vim != 'q')
		{
			putchar(vim);
		}
		putchar('\n');
	}
	return (0);
}
