//wap to check whether a given number is prime number or not
#include<stdio.h>
int main(){
int i,a,b;
printf("enter a number");
scanf("%d",&a);
for(i=2;i<a;i++){
  b=a%i;  
if(b==0)
break;
}
if(b==0){
printf("not a prime number");}
else{
printf("prime number");
    return 0;
}}