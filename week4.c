#include <stdio.h>

int isprime(int num);     // 判断一个数是否为素数

int main(int argc, const char* argv[])
{
    int prime[200] = {0}; // 得到前两百个素数
    int cnt = 0;
    int i = 2;

    while (cnt < 200){
        if (isprime(i)){
            prime[cnt] = i;
            cnt++;
        }
        i++;
    }

    int n, m;             // 获得输入
    int res = 0;

    scanf("%d %d", &n, &m);
    while (n <= m){
        res += prime[n-1];
        n++;
    }

    printf("%d\n", res);

    return 0;
}

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
