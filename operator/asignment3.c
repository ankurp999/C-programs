#include<stdio.h>
int main(){
float a,b,c;
printf("enter the principle amount");
scanf("%f",&a);
printf("enter the intrest rate ");
scanf("%f",&b);
printf("enter the years");
scanf("%f",&c);
printf("simple intrest %.3f",(a*b*c)/100);
    return 0;
}