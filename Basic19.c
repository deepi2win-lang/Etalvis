#include<stdio.h>
int main(){
    int n,s,p,res;
    scanf("%d",&n);
    res=(n%10)%2!=0 &&  ((n/10)%10)%2!=0 ?n-5:n;
    printf("%d",res);

    return 0;
    
}