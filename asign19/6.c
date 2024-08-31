//write a function to swap two elements of given array with specific indices
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array !!");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers ",n);
    for( int i=0;i<=n-1;i++){
    scanf("%d",&a[i]);}
    printf("enter the indices numbers which you want to swap together ");
    int j,k;
    scanf("%d %d",&j,&k);
    a[j]=a[j]+a[k];
    a[k]=a[j]-a[k];
    a[j]=a[j]-a[k];
    printf("the swapped array is ....");

    for(int i=0;i<=n-1;i++){
        printf("\n%d",a[i]);
    }
}