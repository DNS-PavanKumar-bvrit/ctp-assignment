#include<stdio.h>
int main()
{ 
    char ch;
    scanf("%C",&ch);
    if(ch>='a' && ch<='z'){
        printf("lowercase");
    }
    else{
        printf("uppercase");
    }
}