#include<stdio.h>
int main(){
    int n,res;
    scanf("%d",&n);
    res=1+(n-1)%9;
    printf("%d",res);

    return 0;
    
}