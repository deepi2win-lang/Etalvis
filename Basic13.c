#include<stdio.h>
int main(){
    int n,p,q,r,s,rev;
    scanf("%d",&n);
    p=n/1000;
    q=(n/100)%10;
    r=n%10;
    s=(n/10)%10;
    rev=p*1000+q*100+r*10+s;
    printf("%d",rev);
    return 0;
}