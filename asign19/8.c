//write a function to print all unique elements in a array!
#include<stdio.h>
int unique(int a[],int n){
    int x=0;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]==a[j]){
                a[j]=a[j]+1;
                x++;
                break;
            }
        }
    }
    return (n-x);
}
int main(){
    int n;
    printf("enter the size of the array !!");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers ",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("total unique elements are %d ",unique(a,n));
}