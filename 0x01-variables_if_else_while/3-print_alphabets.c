#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	char vim;
	char vam;
	for (vam = 'a';vam <= 'z';vam++)
	{
		putchar(vam);
	}
	for (vim = 'A';vim <= 'Z';vim++)
	{
		putchar(vim);
	}
	putchar('\n');
	return (0);

}
