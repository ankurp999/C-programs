//wap to print all prime numbers between two given numbers
#include<stdio.h>
int main(){
    int i,a,b,j;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
    return 0;
}