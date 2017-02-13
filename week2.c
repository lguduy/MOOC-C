#include <stdio.h>

int main()
{
    int t;  // 输入北京时间
    int BJT_time = 0;  // 合法的北京时间
    int hour, minute, U_hour;  // hour

    scanf("%d", &t);

    // 检验参数合法性
    if (t >= 0)
    {
        if (t <= 2359)
        {
            BJT_time = t;
        }
    }

    hour = BJT_time / 100;  // hour
    minute = BJT_time - hour * 100;  // minute

    if (hour >= 8)
    {
        U_hour = hour - 8;
    }
    else
    {
        U_hour = hour - 8 + 24;
    }

    int U_time = U_hour * 100 + minute;

    printf("%d\n", U_time);

    return 0;
}
