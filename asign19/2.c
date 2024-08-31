//write a function to find the smallest number from the given array of any size.
#include<stdio.h>
int smallest(int arry[],int n){
    if(n==0){
        int y=arry[0]<arry[1]?arry[0]:arry[1];
        return y;}
        int x=smallest(arry,n-1);
        return(arry[n-1]<x?arry[n-1]:x);
    
}
int main (){
    int n;
    printf("enter the size of array !! ");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    int arry[n];
    for(int i=0;i<=(n-1);i++){
        scanf("%d",&arry[i]);
    }
    int y= smallest(arry,n);
    printf("the smallest number in the array is %d",y);
    return 0;
}