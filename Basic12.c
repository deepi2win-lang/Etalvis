#include<stdio.h>
int main(){
    int n,rem,third,sec;
    scanf("%d",&n);
     rem=n%10;
    sec=(n/10)%10;
    third=n/100;
    int rev=rem*100+sec*10+third;
    printf("%d",rev);

    return 0;
}