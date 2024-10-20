#include<stdio.h>
void main()
{ 
    int binarynumber,bit,onescomplement=0,placeholder=1;
    printf("Enter a binary number: ");
    scanf("%d", &binarynumber);
    while(binarynumber!=0)
    {
        bit=binarynumber%2;
        if(bit==0)
        onescomplement+=placeholder;
        binarynumber = binarynumber / 10;
        placeholder *= 10; 
        
    }
    printf("The ones complement of the number is: %d",onescomplement);
    }
    