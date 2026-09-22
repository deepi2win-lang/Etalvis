#include<stdio.h>
int main(){
    int n,res,s,p;
    scanf("%d",&n);
    s=n-5;
    p=(n/10)%10;
    res=(p%2)!=0?n-5:n;
    printf("%d",res);
    return 0;
    
}