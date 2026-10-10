
#include <stdio.h>
#include <math.h>

int main() {
    long long n, sum;
    scanf("%lld", &n);

    sum = n * (n + 1) / 2;

    long long x = (long long)sqrt(sum);

    if (x * x == sum)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}