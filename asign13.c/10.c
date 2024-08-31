//wwrite a menu driven programe with these following options
//calculate LCM of two numbers
//calculate sum of the digits of a number
//volume of cuboid
// check whether a given number is prime or not
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1){
int x, num1, num2,i,h;
printf("\n\n\n1.calculate LCM of two numbers \n2.calculate sum of the digits of a number \n3.volume of cuboid\n4.check whether a given number is prime or not.\n5.exit");
printf("\n\nCHOSE ONE OPTION !");
scanf("%d",&x);
switch(x){
    case 1 :
    
    printf("enter two numbers ");
    scanf("%d%d",&num1,&num2);
for(i=1;i<=num1*num2;i++){
    
    if(i%num1==0&&i%num2==0)
    break;
    
    
}if(num1==0 || num2==0 ) printf("0");
else
printf("LCM=%d",i);
break;
case 2:

printf("enter a numer !");
scanf("%d",&num1);
num2=0;
for(i=1;num1>0;i++){
    h=num1;
    h=num1%10;
     num2=num2+h;
    num1=num1/10;
    
}printf("addition of the digits %d",num2);
break;
  case 3:
  printf("enter length , breath ,hight of the cuboid !");
  scanf("%d%d%d",&num1,&num2,&h);
  printf("volume of the cuboid is %d",num1*num2*h);
  break;
    case 4:
    printf("enter a number !");
    scanf("%d",&num1);
    for(i=2;num1>i;i++){
        if(num1%i==0)
        break;
    }
    if(num1==i)
    printf(" prime");
    else
    printf(" not a PRIME !");
    break;
    case 5:
    exit(0);
    }}
    return 0;
}