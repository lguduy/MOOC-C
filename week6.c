#include <stdio.h>
// 考虑的情况比较多，应该有更简洁的逻辑

// 读入多项式
int* read_poly(int poly[]) // 数组不能直接传入函数，传入的实际是指针
{
    int idx = 0;
    int value = 0;
    do
    {
        scanf("%d %d", &idx, &value);
        poly[idx] = value;
    }
    while(idx != 0);

    return poly;
}

int main(int argc, char const *argv[])
{
    // 初始化数组
    int a[101] = {0};
    int b[101] = {0};

    int *poly1 = read_poly(a);
    int *poly2 = read_poly(b);

    int sum[101] = {0};
    for (int i=0; i<=100; i++)
    {
        sum[i] = poly1[i] + poly2[i];
    }

    int maxid = 0;

    for (int i = 100; i >= 0; i--)
    {
        if (sum[i] != 0)
        {
            printf("%dx%d", sum[i], i);
            maxid = i;
            break;
        }
    }

    if (maxid == 0)
    {
        printf("0");
    }

    for (int i=maxid-1; i>=0; i--)
    {
        if (sum[i] > 0 )
        {
            printf("+");
            if (sum[i] ==1)
            {
                if (i>1)
                {
                    printf("x%d", i);
                }
                else if (i ==1)
                {
                    printf("x");
                }
                else
                {
                    printf("1");
                }
            }
            else
            {
                if (i>1)
                {
                    printf("%dx%d", sum[i], i);
                }
                else if (i ==1)
                {
                    printf("%dx", sum[i]);
                }
                else
                {
                    printf("%d", sum[i]);
                }
            }
        }
        if (sum[i] < 0)
        {
            if (sum[i] == -1)
            {
                if (i>1)
                {
                    printf("-x%d", i);
                }
                else if (i ==1)
                {
                    printf("-x");
                }
                else
                {
                    printf("-1");
                }
            }
            else
            {
                if (i>1)
                {
                    printf("%dx%d", sum[i], i);
                }
                else if (i ==1)
                {
                    printf("%dx", sum[i]);
                }
                else
                {
                    printf("%d", sum[i]);
                }
            }
        }

    }
    printf("\n");

    return 0;
}
