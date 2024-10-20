#include<stdio.h>
 int main()
{
    int month;
    printf("Enter the month number:");
    scanf("%d",&month);
    if(month==2){
        printf("28");
    }
    else if((month<=7 && month%2!=0) || (month>=8 && month%2==0)){
        printf("31");
    }
    else{
        printf("30");
    }
    return 0;
}
