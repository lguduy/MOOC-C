#include <stdio.h>
// 分解质因数

// 判断一个数是否为素数
int isprime(int num)
{
    int isprime = 1;
    int i = 2;
    while (i < num){
        if (num % i == 0){
            isprime = 0;
            break;
        }
        i++;
    }
    return isprime;
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);  // 读入数字

    if (isprime(num))
    {
        printf("%d=%d\n", num, num);
    }
    else
    {
        int i = 2;
        printf("%d=", num);
        while (isprime(num)==0)  //循环条件
        {
            if (num % i == 0)
            {
                printf("%dx", i);
                num /= i;
            }
            else
            {
                i++;
            }
        }
        printf("%d\n", num);

    }
    return 0;
}
