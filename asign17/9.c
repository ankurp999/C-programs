//count the digits of a given number 
#include<stdio.h>
int add(int a,int i){
    if(a==0)
    return i;
    return(add(a/10,i+1));
}
int main(){
    int N,i=0;
    printf("enter a number");
    scanf("%d",&N);
    printf("total digits are %d",add(N,i));
}