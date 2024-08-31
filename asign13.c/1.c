//write a program which take month number as input and display number of days in that months
#include<stdio.h>
int main(){
int x;
printf("enter any months number !");
scanf("%d",&x);
switch(x){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    printf("number of days are 31");
    break;
case 2:
    printf("the month is fabuary and number of days are 28");
    break;
case 4:
case 6:
case 9:
case 11:
    printf("number of days are 30");
    break;
    default:
    printf("invalid number");
}
return 0;
}