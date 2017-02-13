#include <stdio.h>

int main(int argc, const char* argv[])
{
    int a;
    int even_num = 0;  // 奇数计数
    int odd_num = 0;  //偶数计数

    scanf("%d", &a);
    while (a != -1)
    {
        if (a % 2 == 0)
        {
            odd_num ++;
        }
        else
        {
            even_num ++;
        }
        scanf("%d", &a);
    }
    printf("%d %d", even_num, odd_num);

    return 0;
}
