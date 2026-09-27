#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleinterest, compoundinterest;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    // Simple Interest
    simpleinterest = (principal * rate * time) / 100;

    // Compound Interest
    compoundinterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleinterest);
    printf("Compound Interest = %.2f\n", compoundinterest);

    return 0;
}
