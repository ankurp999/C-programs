//write a program in c to copy the elements of one array into another array.
//take array values from the user.
#include<stdio.h>
int main(){
    int a[10],b[10];
    printf("enter 10 numbers please !!");
    for (int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++){
        b[i]=a[i];
    }
    for(int i=0;i<=9;i++){
        printf("\n%d",b[i]);
    }
}