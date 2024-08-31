//wap to check whether given number is there in the fibonacci series or not 
#include<stdio.h>
int main(){
int N,a=0,b=1,c;
printf("enter any number which you want to check ");
scanf("%d",&N);
for(int i=1;7;i++){
    c=a+b;
    if(N==c){
        printf("present in series ");
    break;}
    if(N<c)
    break;
    a=b;
    b=c;
}
if(c>N)
printf("not present in the series");
    return 0;
}  