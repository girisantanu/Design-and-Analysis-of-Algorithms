// eculid's algo
#include <stdio.h>
#include <string.h>

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

int main()
{
    int a = 10;
    int b = 15;
    printf("GCD (%d,%d)=%d\n", a, b, gcd(a, b));
    a = 35, b = 10;
    printf("GCD (%d,%d)=%d\n", a, b, gcd(a, b));
    a = 31, b = 2;
    printf("GCD (%d,%d)=%d\n", a, b, gcd(a, b));
    return 0;
}


