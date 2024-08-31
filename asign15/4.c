//write a function to find next prime number of a given number(TSRS)
#include<stdio.h>
int ass(int);
int main(){
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
    y=ass(x);
    printf("the next prime number is %d",y);
}
int ass(int a){
    int j;
    for(int i=a+1;1;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        return i;
    }
}