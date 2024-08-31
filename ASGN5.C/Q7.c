#include<stdio.h>
int main(){
int a,b;
printf("enter two number!");
scanf("%d%d",&a,&b);
if(a>b)
{
    printf("the greater number is %d",a);
}
 else if(b>a)
{
    printf("the graeter number is %d",b);
}
else
{
    printf("the number is %d",a);
}
    return 0;
}