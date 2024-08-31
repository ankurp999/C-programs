// write a program to sort elements of an array of size 10.
// take values from the user,
// #include<stdio.h>
// int sorting(int arry[],int n){
//     int y;
//     if (arry[n]<arry[n-1]){
//       y=arry[n-1];
//       arry[n-1]=arry[n];
//       arry[n]=y;
//     }
//     if(n==1)
//     return 0;
//     return(sorting(arry,n-1));

// }
// int main(){
//     int a[10];
//     printf("enter 10 numbers ");
//     for (int i=0;i<=9;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int k=0;k<9;k++){
//     sorting(a,9-k);}
// printf("sorted elements are.....");
// for(int j=0;j<10;j++)
//  printf("\n%d",a[j]);
// }
#include<stdio.h>
int main(){
    int a[10],y;
    printf("enter 10 numbers");
    for(int i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<=9;i++){
        for(int j=0;j<9-i;j++){
            if(a[j]>a[j+1]){
                y=a[j];
                a[j]=a[j+1];
                a[j+1]=y;
            }
        }
    }
    printf("the sorted elements are.....");
    for(int i=0;i<=9;i++)
    printf("\n%d",a[i]);

}