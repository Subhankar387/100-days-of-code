#include <stdio.h>

int main() {

    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

int sum=a+b;
printf("The sum of a and b is %d\n",sum);
int diff =a-b;
printf("The difference of a and b is %d\n",diff);
int pro=a*b;
printf("The product of a and b is %d\n",pro);
int quo=a/b;
printf("The quotient of a and b is %d\n",quo);/* yahan par hum printf("Sum of a and b is %d",a+b); aise bhi kar 
    sakte the without defining sum */
   



    if (b == 0) // two equal signs are used for comparison, one equal sign is used for assignment matlab agar b= 0 kiya to b i assigned 0
    {
        printf("Error: division by zero is not allowed.\n");
        return 1;
    }

   
return 0;
}

  