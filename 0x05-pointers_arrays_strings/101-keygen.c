#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: 0 is success
 */

int main(void)
{
	int remainingSum = 2772, index = 0, j, randomValue;
	char password[100];
	time_t currentTime;

	srand((unsigned) time(&currentTime));
	while (remainingSum > 0)
	
	{
		randomValue = rand() % 94 + 33; 
		if (randomValue <= remainingSum)
		{
			password[index] = randomValue;
			remainingSum -= randomValue;
			index++;
		}
	}	

	for (j = 0; j <= index; j++)
	{
		printf("%c", password[j]);
	}
	return (0);
}
