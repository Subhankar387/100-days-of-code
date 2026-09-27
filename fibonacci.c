#include<stdio.h>
int main(){
  int n,i,next=0,first=0,second=1;
  printf("Enter the no of terms :");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    printf("%d ",first);
    next=first+second;
    first=second;
    second=next;
    }printf("\n");
    return 0;
}