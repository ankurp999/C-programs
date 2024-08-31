// wap which take the month number as an input and display number of days in that month 
#include<stdio.h>
int main(){
int a;
printf("enter a month's number");
scanf("%d",&a);
if(a==1||a==3||a==5||a==7||a==8||a==10||a==12 )
printf("31 days");
else if(a==2) 
printf("it may be 28 and 29");
else
printf("30 days ");
    return 0;
}