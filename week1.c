#include <stdio.h>

int main()
{
    int num;

    printf(" 输入一个三位数字：");
    scanf("%d", &num);

    int a = num % 10;  // 获得个位数字
    int c = num /100;  //获得百位数字
    int b = (num - c*100 -a) /10;  // 获得十位数字

    if (a != 0)
    {
        printf("%d%d%d", a, b, c);
    }
    else
    {
        if (b != 0)
        {
            printf("%d%d", b, c);
        } else
        {
            printf("%d", c);
        }

    }
    return 0;
}
