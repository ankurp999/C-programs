//wap to count digits in a given numbers 
#include<stdio.h>
int main(){
int i,a;
printf("enter a number");
scanf("%d",&a);
for(i=1;5;i++){
    a=a/10;
    if(a==0)
    break;
}
printf("total digits %d",i);
    return 0;
}