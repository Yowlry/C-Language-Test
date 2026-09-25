#include <stdio.h>

int main()
{
    // 1. 设置颜色为红色 (ANSI Escape Code)
    printf("\033[31m");

    // 2. 纵向步长0.1，横向步长0.05 (2:1 比例适配)
    // y从1.5下降到-1.5 (从上往下打印)
    for (float y = 1.5f; y > -1.5f; y -= 0.1f)
    {

        // x从-1.5增加到1.5(从左往右打印)
        for (float x = -1.5f; x < 1.5f; x += 0.05f)
        {

            // 核心方程修正：(x^2 + y^2 - 1)^3 - x^2*y^3 <= 0
            // 这里对x和y做了微调，使形状更丰满
            float ht = x * x + y * y - 1;

            // 为了修正终端字符高宽比，对x的比例进行微调
            // 这里的判断逻辑是：如果点在心形内，打 '*'
            if (ht * ht * ht - x * x * y * y * y <= 0.0f)
            {
                putchar('*');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    // 3. 恢复颜色设置
    printf("\033[0m");


    return 0;
}