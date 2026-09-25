#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int rand_number = rand() % 100 + 1;

	int guess;

	while (1)
	{
		printf("%s\n", "please enter a number to guess: ");
		scanf("%d", &guess);

		if (guess < rand_number)
		{
			printf("%s\n", "too low");
		}
		else if (guess > rand_number)
		{
			printf("%s\n", "too high");
		}
		else
		{
			printf("%s\n", "呼んだ？");
			break;
		}
	}


	return 0;
}
