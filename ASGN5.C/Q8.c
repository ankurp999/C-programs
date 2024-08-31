#include<stdio.h>
int main(){
int a,b,c,D;
printf("enter the coefficient of the quadratic equatiion ");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
if(D<0)
{
printf("the roots the equation are imaginary");
}
else if(D>0)
{
printf("the roots the tthe eqn are real and distinct");}
else{
printf("roots are real and equal"); }

    return 0;
}