#include <stdio.h>

int main() {
    int num, first, last, digits, divisor, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    divisor = 1;
    digits = num;

    while (digits >= 10) {
        digits /= 10;
        divisor *= 10;
    }

    first = digits;

    middle = (num % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping: %d\n", result);

    return 0;
}
