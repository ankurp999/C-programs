//write a fumction to print squares of first N naturral numbers 
#include<stdio.h>
#include<math.h>
int add(int);
int main(){
    int N;
    printf(" enter a number");
    scanf ("%d",&N);
    N=N+1;
    add(N);
    return 0;
}
int add(int a){
    int b;
    if (a==1)
    return 1;
    b=pow(add(a-1),2);
    printf("%d ",b);
    return a;
}