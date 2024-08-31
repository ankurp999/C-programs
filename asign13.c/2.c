#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1){
int a,b,x;
printf("\n\n\n\n 1. addition \n 2. subtraction\n 3. multiplication\n 4. division\n 5. exit");
printf("\n\n\nchose a number !");
scanf("%d",&x);
switch(x){
    case 1:
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number ");
    scanf("%d",&b);
    printf("\n\naddition is %d",a+b);
    break;
    case 2:
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number ");
    scanf("%d",&b);
    printf("\n\nsubtraction is %d",a-b);
    break;
    case 3:
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number ");
    scanf("%d",&b);
    printf("\n\nmultiplication is %d",a*b);
    break;
    case 4:
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number ");
    scanf("%d",&b);
    printf("\n\ndivision is %d",a/b);
    break;
    case 5:
    exit(0);
}}

    return 0;
}