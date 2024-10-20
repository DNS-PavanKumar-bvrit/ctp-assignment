#include<stdio.h>
int main()
{   
    int n,isPrime=1;
    scanf("%d",&n);
    for(int i =2;i*i<=n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }      
    }
    if(isPrime){
        printf("%d is prime",n);
    }
    else{
        printf("%d is not prime",n);
    }
    return 0;
}