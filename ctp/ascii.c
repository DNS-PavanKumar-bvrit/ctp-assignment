#include<stdio.h>
int main()
{
   
    int ascii=0;
    while(ascii<256){
    char ch=ascii;
    printf("The character at ascii %d is %c \n",ascii,ch);
    ascii++;
}
    return 0;
}