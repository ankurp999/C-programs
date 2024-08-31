#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    printf("greatest value is %d",a);
    else if(b>=a&&b>=c)
    printf("greatest is%d",b);
    else
    printf("greatesst is %d",c);
    return 0;
}