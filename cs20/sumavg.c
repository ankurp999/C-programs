#include<stdio.h>
int main(){
    int a,b,c,sum;
    float avr;
    printf("enter three numbers !");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avr=sum/3.0;
    printf("%d\n%.2f",sum,avr);

}