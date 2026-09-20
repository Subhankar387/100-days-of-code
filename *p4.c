#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i + 3; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
