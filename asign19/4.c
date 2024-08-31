// write a function to rotate an array by n position in d direction
// the d is an indicative value for left and right.
#include<stdio.h>
void rotation(int a[],int n,int N,int d){
    int b[n];
    for(int i=0;i<=n-1;i++){
        b[i]=a[i];
    }
    if(d){
        for(int i=0;i<=n-1;i++){
            if(i<n-N){
                a[i]=b[N+i];
            }
            else{
                a[i]=b[i-n+N];
            }
        }
    }
    if(d==0){
        for(int i=0;i<n;i++){
            if(i<N){
                a[i]=b[n-N+i];
            }
            else{
                a[i]=b[i-N];
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    printf("enter the size of the array !!");
    int n;
    scanf("%d",&n);
    printf("enter %d numbers ",n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("in whitch direction you want to rotate the array \n for LEFT enter 1 \n for RIGHT enter 0 ");
    int d;
    scanf("%d",&d);
    printf("how many times you want to rotate !!");
    int N;
    scanf("%d",&N);
    rotation(a,n,N,d);
    return 0;
}