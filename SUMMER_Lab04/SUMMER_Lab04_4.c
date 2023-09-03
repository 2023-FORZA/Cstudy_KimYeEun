//5347
#include <stdio.h>

long long get_gdc(long long big, long long small)
{
    long long big2 = big, small2 = small;

    //mod_bs : ������ ���� ���� ����
    long long mod_bs = (big2 % small2);

    while (mod_bs != 0)
    {
        //�������� 0�� �ƴϸ� big������ small��, small������ ���������� �ְ� �ٽ� �ݺ�
        big2 = small2;
        small2 = mod_bs;
        mod_bs = (big2 % small2);
    }
    //�ݺ��� �����ٴ� ���� �������� 0�϶� �̹Ƿ� �̶� small�������� �ִ�����!
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

//long long, int ����