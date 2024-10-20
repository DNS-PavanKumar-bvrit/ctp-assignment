#include<stdio.h>
int  main(){
    int n,temp,sum=0,rem;
    printf("enter the number");
    scanf("%d",&n);
        temp=n;
        while(n>0){
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(temp==sum){
            printf("armstrong number");
        }
        else
        {
            printf("not armstrong number");
        }
        return 0;
    }
