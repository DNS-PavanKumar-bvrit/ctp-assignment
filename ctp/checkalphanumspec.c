#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is an alphabet",ch);
}
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a number",ch);
    }
    else
    {
        printf("%c is a special character",ch);
    }
    return 0;
}
   
