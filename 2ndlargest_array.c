#include<stdio.h>
int main(){
    int arr[]={10, 5, 8, 10, 3} ;
    int size=(sizeof (arr)/sizeof arr[0]);

int max=0; int secMax=1;
max=arr[0]>arr[1]?arr[0]:arr[1];
secMax=arr[0]<arr[1]?arr[0]:arr[1];


for(int i=2;i<size;i++){ // 2 se because 1st ko aur 0 ko pehle hi ternary se check kiya

if (arr[i]>max){
 secMax=max;
 max=arr[i];
}
else if (arr[i]>secMax && arr[i]!=max){
secMax=arr[i];
}}

printf(" Second max  element : %d\n",secMax);




return 0;

}