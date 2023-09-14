#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1
 * to 100, replacing multiples of 3 with "Fizz,"
 * multiples of 5 with "Buzz," 
 * and multiples of both 3 and 5 with "FizzBuzz."
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
