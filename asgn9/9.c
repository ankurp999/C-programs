//wap to calculate the LCM of two numbers 
#include<stdio.h>
int main(){
int i;
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
for(i=1;i<=a*b;i++){
    
    if(i%a==0&&i%b==0)
    break;
    
    
}if(a==0 || b==0 ) printf("0");
else
printf("LCM=%d",i);

    return 0;
}