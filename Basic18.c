#include<stdio.h>
int main(){
    int n,res,s=0;
    scanf("%d",&n);
    res=(n%10+n/10)%2!=0?n-5:n;
    printf("%d",res);

    return 0;
    
}