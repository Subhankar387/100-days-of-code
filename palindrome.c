#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; /*yeh step kafi important hai kyuki loop toh n=0 tak chalegi so if I dont copy 
    n to another variable palindrome hoke bhi answer nahi hi ayega */

    while (n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    printf((original==reverse)? "palindrome\n" : " not a palindrome\n");

    return 0;
}
