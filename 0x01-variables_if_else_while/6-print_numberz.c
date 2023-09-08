#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the digits from 0 to 9 using a while loop
 *              and the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums = "0123456789";

	int i = 0;

	while (nums[0] != '\0')
	{

	putchar(nums[i]);
	i++

	}
	return (0);
}
