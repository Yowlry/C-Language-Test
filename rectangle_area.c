#include <stdio.h>

// 给定两个矩形，使用函数判断谁的面积更大
double getArea1(double len, double width)
{
	double area = len * width;
	return area;
}


int main5()
{
	// 1. 调用函数去求矩形的面积
	double area1 = getArea1(number1, number2);
	double area2 = getArea1(number3, number4);

	// 2. 判断
	if (area1 > area2)
	{
		printf("%s\n", "第一个矩形更大");
	}
	else if (area2 > area1)
	{
		printf("%s\n", "第二个矩形更大");
	}
	else
	{
		printf("%s\n", "两个矩形一样大");
	}


	return 0;
}
