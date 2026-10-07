#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Output: ");

    // Print first initial
    printf("%c.", name[0]);

    // Print initials of middle names
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            // Check if this is not the surname
            int j = i + 1;
            while (name[j] != '\0' && name[j] != ' ' && name[j] != '\n')
                j++;

            if (name[j] != '\n' && name[j] != '\0')
                printf(" %c.", name[i + 1]);
        }
    }

    // Print surname in full
    i = 0;
    while (name[i] != '\0') {
        if (name[i] == ' ') {
            int j = i + 1;
            while (name[j] == ' ')
                j++;

            // Find last word
            int k = j;
            while (name[k] != '\0' && name[k] != '\n')
                k++;

            if (name[k] == '\n' || name[k] == '\0') {
                printf(" ");
                while (name[j] != '\0' && name[j] != '\n') {
                    printf("%c", name[j]);
                    j++;
                }
                break;
            }
        }
        i++;
    }

    return 0;
}
