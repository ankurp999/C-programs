#include<stdio.h>
int main()
{
    float a,b;
printf("what is the cost price of one dozen banana?");
scanf("%f",&a);
printf("what is the selling price of one dozen banana?");
scanf("%f",&b);
float gain, loss;
a=(25*a)/12.0;
b=(25*b)/12.0;
if(a>b)
{
    loss=a-b;
    printf("loss is %.2f",loss);
}
if(a<b)
{
    gain=b-a;
    printf("gain is %.2f",gain);
}
// t=(b-a)*.166;
// if (t<0)

// {
//     printf("the loss is=%f",t);
    
// }
// else 

// {
//     printf("the profit is =%f",t);
// }


    return 0;
}