//write a function to count each element of the array
#include<stdio.h>
int count(int a[], int n){
    for(int i=0;i<=n-1;i++){
        int x=1;
        for(int j=0;j<=n-1;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    x++;
                }
            }
        }
        printf("\nThe total number of %d is present in the array is %d ",a[i],x);
    }
}
int main(){
    int n;
    printf("enter the size of an array ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers ",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    count(a,n);
}