#include <stdio.h>

int main() {
    char str[100];
    int seen[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';

        if (seen[index]) {
            printf("%c", str[i]);
            return 0;
        }

        seen[index] = 1;
    }

    printf("No repeating character");

    return 0;
}
