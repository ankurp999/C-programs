// write a recursive function to print N natural numbers in reverse order
#include<stdio.h>
int N;
int add(int);
int main(){
    printf("enter a number");
    scanf("%d",&N);
    add(N);
}
int add(int a){
   int b;
   if(a==0)
   return 0;
   b=N-add(a-1);
   printf("%d  ",b);
   return a;

}