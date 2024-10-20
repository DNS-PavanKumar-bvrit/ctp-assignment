#include<stdio.h>
int main()
{
    int n, sum = 0,temp,j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(j=1;j<=n;j++){
      temp=j;
    sum = 0;  
    for (int i = 1; i <= j / 2; i++) {
        if (j % i == 0) {
            sum += i;
        }
    }
    j=temp;
    if (sum == j) {
        printf("%d is a perfect number.\n", j);

    }    
    }
    return 0;   
}