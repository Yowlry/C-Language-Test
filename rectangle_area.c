#include <stdio.h>

// 给定两个矩形，使用函数判断谁的面积更大
// Given two rectangles, use a function to determine which one has a larger area
double getArea(double len, double width)
{
	double area = len * width;
	return area;
}


int main()
{
	// 1. 调用函数去求矩形的面积
	// 1. Call a function to calculate the area of the rectangle
	double area1 = getArea(num1, num2);
	double area2 = getArea(num3, num4);

	// 2. 判断
	// 2. Determine
	if (area1 > area2)
	{
		printf("%s\n", "the first rectangle is larger");
	}
	else if (area2 > area1)
	{
		printf("%s\n", "The second rectangle is larger");
	}
	else
	{
		printf("%s\n", "both rectangles are equal in size");
	}


	return 0;
}
