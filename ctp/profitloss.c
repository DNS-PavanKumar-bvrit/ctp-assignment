#include<stdio.h>
int main()
{
   int sp,cp,profit,loss,ans;
   printf("Enter the cost price: ");
   scanf("%d",&cp);
   printf("Enter the selling price: ");
   scanf("%d",&sp);
   if(cp<sp)
   profit=sp-cp;
   if(sp<cp)
   loss=cp-sp;
   ans=profit>loss?profit:loss;
   printf("Profit or loss: %d",ans);
   return 0;
}