#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");

    // Check whether the file exists
    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened.\n");
    }
    else
    {
        printf("\nFile contents:\n");

        // Read and display the file contents
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }

        // Close the file
        fclose(fp);
    }

    return 0;
}