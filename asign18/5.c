//write a program to find the smallest number stored in an array of size 10.
//take array values from the user.
#include<stdio.h>
int smallestvalue(int arry[],int n){
    if(n==0){
   int y=(arry[0]<arry[1])?arry[0]:arry[1];
   return y;}
   int x=smallestvalue(arry,n-1);
   return (arry[n-1]<x?arry[n-1]:x);
}
int main(){
    int arry[10];
    printf("enter 10 numbers !");
    for(int i=0;i<=9;i++){
    scanf("%d",&arry[i]);}
    printf("the smallest value from the array is %d",smallestvalue(arry,10));
}