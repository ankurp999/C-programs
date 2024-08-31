//write a program whitch takes the day number of a week and displays 
//a uniqe greeting message for the day.
#include<stdio.h>
int main(){
int x;
printf("enter a number from 1 to 7:");
scanf("%d",&x);
switch(x){
     case 1:
     printf("sunday,have a great day !");
     break;
     case 2:
     printf("this is monday,good day !");
     break;
     case 3:
     printf("this is is tuesday, have a great day !");
     break;
     case 4:
     printf("this is wednesday, wish you best !");
     break;
     case 5:
     printf("this is thursday,good morning !");
     break;
     case 6:
     printf("this is friday, enjoy the day !");
     break;
     case 7:
     printf("this is saturday ,wish you a good day !");
     break;
     default:
     printf("invalid number");
}
    return 0;
}