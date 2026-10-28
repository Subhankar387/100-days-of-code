#include <stdio.h>

int main() {
    FILE *f;
    char name[20];
    int age;

    f = fopen("info.txt", "w");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fputs("Name: ", f);
    fputs(name, f);
    fputs("\nAge: ", f);

    fprintf(f, "%d", age);

    fclose(f);

    printf("Data saved successfully!");

    return 0;
}