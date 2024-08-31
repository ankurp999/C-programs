//wap to N natural even numbers in reverse order
#include<stdio.h>
int main(){
int i,N;
printf("enter a number ");
scanf("%d",&N);
i=N;
if(N%2==0){
while(i>0){
    printf("\n%d",i);
    i=i-2;}
    
}
else{
        i=i-1;
        while(i>0){
    printf("\n%d",i);
    i=i-2;}
    }
    return 0;
}