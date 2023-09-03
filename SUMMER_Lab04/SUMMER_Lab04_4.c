//5347
#include <stdio.h>

long long get_gdc(long long big, long long small)
{
    long long big2 = big, small2 = small;

    //mod_bs : 나머지 값을 받을 변수
    long long mod_bs = (big2 % small2);

    while (mod_bs != 0)
    {
        //나머지가 0이 아니면 big변수에 small값, small변수에 나머지값을 넣고 다시 반복
        big2 = small2;
        small2 = mod_bs;
        mod_bs = (big2 % small2);
    }
    //반복이 끝났다는 것은 나머지가 0일때 이므로 이때 small변수값이 최대공약수!
    return small2;
}

long long get_lcm(long long x, long long y, long long gdc) {
    return (x * y) / gdc;
}

int main() {
    long long n;
    scanf("%lld", &n);

    while (n--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long gdc = get_gdc(a, b);
        long long lcm = get_lcm(a, b, gdc);
        printf("%lld\n", lcm);
    }
    return 0;
}

//long long, int 구별