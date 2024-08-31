//write a proggram to calculate the sum of all even numbers and sum of all odd numbers
//which are stored in an array of size 10 . take array values from user ,
#include<stdio.h>
int sumofodd(int[],int);
int sumofeven(int[],int);
int sumofeven (int arry[],int n){
    if(n==0)
    return 0;
    if(arry[n-1]%2==0){
        return(arry[n-1]+sumofeven(arry,n-1));
    }
    else
    return(sumofeven(arry,n-1));
}
int sumofodd(int arry[],int n){
     if(n==0)
     return 0;
    if(arry[n-1]%2){
        return(arry[n-1]+sumofodd(arry,n-1));}
        else
    return(sumofodd(arry,n-1));
}
int main(){
    int arry[10];
    printf("enetr any 10 numbers !");
    for(int i=0;i<=9;i++){
        scanf("%d",&arry[i]);
    }
    printf("the sum of all entered even number is %d",sumofeven(arry,10));
    printf("\nthe sum of all entered odd numbers is %d",sumofodd(arry,10));
}