#include <stdio.h>

int main()
{ char ch;

   do{
    printf("Hello\n");
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &ch);
   }while(ch=='y');
    return 0;
}

