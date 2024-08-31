//write a program to find the secand largest number of an array ;
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
            if(a[j]>a[j+1]){
                y=a[j];
                a[j]=a[j+1];
                a[j+1]=y;
            }
        }
    }
    printf("the secand largest number is (%d)",a[8]);
}