#include<stdio.h>
int main (){
 int n,i,j,fact=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
  
  for(j=1;j<=n;j++){fact=1;//fact=1 is very imp varna previous value save ho jati hai
    for(i=1;i<=j;i++)
  {
  fact*=i;
   }
   if(j !=n){
   printf("%d! + ",j);}
   else 
   {
    printf("%d! ",j);
   }
   sum+=fact;
   

   

  }printf("= %d\n",sum);





    return 0;

}