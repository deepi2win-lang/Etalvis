#include<stdio.h>
int main(){
    int n,res;
    scanf("%d",&n);
    res=(n/10)%10;
    printf("%d",n-(res*10));

    return 0;
    
}