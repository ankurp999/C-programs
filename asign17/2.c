// write a recursive function to print sum of N odd natural numbers.
#include<stdio.h>
int add(int ,int);
int main(){
    int N,M=1;
    printf("enter a number");
    scanf("%d",&N);
    printf("%d",add(M,2*N));
return 0;
}
int add(int a,int b){
    if(a>b)
    return 0;
    
    return (a+add(a+2,b));

}