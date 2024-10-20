#include<stdio.h>
int main()
{
    int base,exponent,result,i;
    scanf("%d %d",&base,&exponent);
    result=1;
    for(i=1;i<=exponent;i++)
    {
        result=result*base;
    }
    printf("%d",result);
    return 0;
}