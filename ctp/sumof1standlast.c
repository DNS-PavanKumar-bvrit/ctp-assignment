#include<stdio.h>
int main()
{
    int n,lastdigit,sum;
    scanf("%d",&n);
    lastdigit=n%10;
    while(n>=10){
        n=n/10;
    }
    sum=n+lastdigit;
    printf("%d",sum);
    return 0;
    }