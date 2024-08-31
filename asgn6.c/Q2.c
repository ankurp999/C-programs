//wap which takes the cost price and selling price of a 
//product from the user.now calculate and print the profit 
//and loss percentage.
#include<stdio.h>
int main(){
float cp,sp;
printf("enter the cost price and selling price ");
scanf("%f%f",&cp,&sp);
if(cp>sp){

    printf("loss percentage is %0.2f",((cp-sp)*100/cp));
}
if(sp>cp)
{
    printf("profit percentage is %0.2f",((sp-cp)*100/cp));
}
    return 0;
}