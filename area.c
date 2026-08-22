#include<stdio.h>
int main (){
    int a,b;
    printf("enter the length of side a ");
    scanf("%d",&a);
    printf("enter the length of side b:");
    scanf("%d",&b);
    printf("the area of the rectangle is %d\n",a*b);
    printf("the perimeter of the rectangle is %d\n",2*(a+b));
    
    return 0;
}