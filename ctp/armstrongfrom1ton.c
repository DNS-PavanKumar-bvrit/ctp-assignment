#include<stdio.h>
int main()
{
    int N,temp,rem,n,sum;
    scanf("%d",&N);
      for(int n=1;n<=N;n++)
      {    sum=0;
            temp=n;
        while(n>0){
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        n=temp;
        if(n==sum){
            printf("%d\n",temp);
        }
      }
}