//wap to find next prime number of a given number
#include<stdio.h>
int main(){
int a,i,j;
printf("enter a number");
scanf("%d",&a);
for(i=a+1;7;i++){
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        break;
    }
    if(i==j){
        printf("%d ",i);
        break;
    }
}

    return 0;
} 