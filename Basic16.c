#include<stdio.h>
int main(){
    int n,res;
    scanf("%d",&n);
    res= (n % 2 )!=0 ? n-5 : n;
    printf("%d",res);
    
    return 0;
}