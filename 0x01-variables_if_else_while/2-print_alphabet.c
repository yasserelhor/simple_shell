#include <stdio.h>

/**
 * input - empty point of the program
 *
 * Description: this function uses putchar to print lowercase alphabet
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	while (alpha[i] != '\0') 
	{
		putchar(alpha[i]);
		i++;
	}
	return (0);

}
