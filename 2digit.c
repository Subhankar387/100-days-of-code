#include<stdio.h>
// 2digit number -> 1 
// non 2 digit number ->0
int main(){
    int x;
    printf("Enter the number:");
    scanf("%d",&x);

    printf("%d\n",x>9 && x<100);//better way is if else statement but this is a short way to do it
    return 0;
}