// n terms of faboncci series
#include<stdio.h>
int add(int c,int a,int b,int i){
    if(i==c)
    return 0;
    printf("%d ",b);
    return(add(c,a=b,a+b,i+1));
    
    
}
int main(){
    printf("enter a number");
    int c,a=0,b=1,i=1;
    scanf("%d",&c);
    printf("the series is here!!");
    add(c,a,b,i);

}