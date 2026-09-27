#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
   // yahan par we could have used if ladder pehle if year%100==0 then if year%400==0
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}