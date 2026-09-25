#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*
		生成1 ~ 100之间的随机数，使用键盘录入去猜，猜中为止
	*/

	// 1. 生成1 ~ 100之间的随机数
	srand(time(NULL));

	int rand_number_game = rand() % 100 + 1;

	// 2. 利用循环+键盘录入去猜
	int guess;

	while (1)
	{
		printf("%s\n", "请输入您要猜的数字：");
		scanf("%d", &guess);

		if (guess < rand_number_game)
		{
			printf("%s\n", "猜小了");
		}
		else if (guess > rand_number_game)
		{
			printf("%s\n", "猜大了");
		}
		else
		{
			printf("%s\n", "呼んだ？");
			break;
		}
	}


	return 0;
}