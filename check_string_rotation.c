#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    scanf("%s", s1);
    scanf("%s", s2);

    // Different lengths cannot be rotations
    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation");
        return 0;
    }

    // Concatenate s1 with itself
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is present in s1+s1
    if (strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not a rotation");

    return 0;
}
