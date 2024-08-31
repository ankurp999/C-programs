//wap to print first N natural numbetrs in reverse order
#include<stdio.h>
int main(){
int i,N;
printf("enter a number");
scanf("%d",&N);
i=N;
while(i>0){
    printf("\n %d",i);
    i--;
}
    return 0;
}