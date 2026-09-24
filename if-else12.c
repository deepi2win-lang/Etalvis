#include<stdio.h>
int main(){
   int n,a,b;
   scanf("%d",&n);
   a=n%10;
   b=n/10;
   if(b<=a){
    printf("1");
   }
   else{
    printf("0");
   }
    return 0;
}