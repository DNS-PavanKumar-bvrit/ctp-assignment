#include<stdio.h>
int main(){
     int i, j, k,n,num;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        num=1;
        for (k = 0; k <= i; k++) {
            printf("%d ", num);
            num = num * (i - k) / (k + 1);
        }
        printf("\n");
    }
}