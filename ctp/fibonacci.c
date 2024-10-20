#include<stdio.h>
int main()
{
    int prevprev=0,prev=1,next=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        next=prev+prevprev;
        printf("%d ",next);
        prevprev=prev;
        prev=next;
    }
    return 0;
}