#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,discriminant,D;
    float root1,root2;
    scanf("%d %d %d",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    D=sqrt(discriminant);
    if(discriminant>0){
    root1=(-b+D)/(2*a);
    root2=(-b-D)/(2*a);
    printf("Roots are %f and %f",root1,root2);}
    else if(discriminant==0){
    root2=(-b)/(2*a);
    printf("Roots is %f",root2);
    }
    else{
    
    printf("Roots are imaginary");
    }
    return 0;
}