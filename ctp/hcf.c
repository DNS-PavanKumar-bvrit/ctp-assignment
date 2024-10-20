#include<stdio.h>
void main()
{
   int a, b, gcd = 1, i;  
   scanf("%d%d", &a, &b);
   
  
   int min = (a < b) ? a : b;

   for(i = 1; i <= min; i++) {
       if(a % i == 0 && b % i == 0) {
           gcd = i;
       }
   }

   printf("%d", gcd);
}
