#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (sum == original) {
        printf("Armstrong number");
    }
    else {
        printf("Not an Armstrong number");
    }

    return 0;
}
/*Alternate
int n=153;
int copy=n;
intc=0;
while(n>0){
   c++;
    n/=10;}
   n=copy;
   int sum=0;
    while (n>0){
        int digit=n%10;
        sum+=pow(digit,c);
        n/=10;
    }
    printf((sum==copy)?"Armstrong\n":"Not Armstrong\n");
*/