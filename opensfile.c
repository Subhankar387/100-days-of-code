
#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check whether the file exists
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    // Read and print lines until EOF
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }

    // Close the file
    fclose(fp);

    return 0;
}
