//write a function to calculate HCF of two numbers (TSRS)
#include<stdio.h>
int hcf(int,int);
int ass(int,int);
int main(){
    int x,y,z,h;
    printf("enter two numbers ");
    scanf("%d%d",&x,&y);
    // z=ass(x,y);
    h=hcf(x,y);
    printf("HCF is %d",h);
}
int ass(int a,int b){
    int f;
    f=a>b?a:b;
    for(int i=f;a*b>=1;i--){
        if(a%i==0&&b%i==0)
        
        return i;
    }
}
int hcf(int a,int b)
{
    int h;
    for(h=a<b?a:b;h>=1;h--){
        if(a%h==0&&b%h==0)
        return h;
    }
}
