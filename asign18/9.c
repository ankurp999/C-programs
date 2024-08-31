//write a program to sort an array in descending order ;
//take values from the user;
#include<stdio.h>
int main(){
    int a[10];
    int y;
    printf("enter 10 numbers please !!");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++){
        for(int j=0;j<9-i;j++){
            if(a[j]<a[j+1]){
                y=a[j];
                a[j]=a[j+1];
                a[j+1]=y;
            }
        }
    }
    printf("the sorted elements in descending order are.....");
    for(int i=0;i<=9;i++)
    printf("\n%d",a[i]);
}