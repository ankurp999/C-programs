// calculate the area of circle (TSRS)
#include<stdio.h>
float add(int);
int main(){
float k;
int x;
printf("enter a number");
scanf("%d",&x);
k=add(x);
printf("the area of the circle %.2f",k);
return 0;
}
float add(int a)
{
    float c;
c=3.14*a*a;
return c;
}