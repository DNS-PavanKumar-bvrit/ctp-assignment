#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b+c==180){
        printf("yes");
    }
    else{
        printf("no");
    }
}