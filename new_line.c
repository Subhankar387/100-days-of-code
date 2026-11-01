
#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    // Open existing file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Get text from the user
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Append text to the end of the file
    fprintf(fp, "%s", text);

    printf("Text appended successfully.");

    // Close the file
    fclose(fp);

    return 0;
}
