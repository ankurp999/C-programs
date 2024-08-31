// table of N 
#include<stdio.h>
int main(){
int i,N,a,b;
printf("enter a number");
scanf("%d",&N);
i=N;
b=i;
a=N*10;
while(i<=a){
printf("\n%d",i);
i=i+b;
}
    return 0;
}