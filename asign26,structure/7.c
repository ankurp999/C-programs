#include<stdio.h>
struct time{
    int hour;
    int minute;
    int sec;
};
void display(struct  time b){
    printf("%d:",b.hour);
    printf("%d:",b.minute);
    printf("%d:",b.sec);
}
struct time diff(struct time start,struct time end)
{
    struct time temp;
   if(start.sec>end.sec){
    temp.sec=60+end.sec-start.sec;
    end.minute--;
   }
   else
   temp.sec=end.sec-start.sec;
   if(start.minute>end.minute){
    temp.minute=60+end.minute-start.minute;
    end.hour--;
   }
   else
   temp.minute=end.minute-start.minute;
   temp.hour=end.hour-start.hour;
   return temp;
}
int main(){
    struct time start,diffrence;
    printf("enter start hours, minutes and seconds: ");
    scanf("%d%d%d",&start.hour,&start.minute,&start.sec);
    struct time end;
    printf("enter end hours, minutes and seconds: ");
    scanf("%d%d%d",&end.hour,&end.minute,&end.sec);
     diffrence=diff(start,end);
     display(diffrence);
     return 0;
}