#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int num, guess, nGuesses = 0;
	srand(time(0));

	num = rand() % 50 + 1;
	do
	{
		printf("Guess a number between 1 and 50:\n");
		scanf("%d", &guess);

		if (guess < num)
		{
			printf("Your Guess is less than the number \n");
		}
		else if (guess > num)
		{
			printf("Your Guess is Greater than the number \n");
		}
		else if (guess == num)
		{
			printf("Bingo!!!CORRECT:  You Guessed %d time\n", nGuesses);
		}

		nGuesses++;
	} while (guess != num);

	return 0;
}