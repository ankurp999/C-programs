//write a function to find the first occurrence of adjecent duplicate
// values in the array.function has to return the value the element 
#include<stdio.h>
int duplicate(int a[],int n){
    int i;
    for( i=0;i<=n-1;i++){
        if(a[i]==a[i+1]){
            break;
        }
    }
    if(i<n){
    return(a[i]);}
    else
    return 0;
}
int main(){
    int n;
    printf("enter the size of the array !!");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int y = duplicate(a,n);
    if( y ){
    printf("the first occurrence of addjecent duplicate value in array is %d ",y);}
    else
    printf(" there is no adjecent duplicate elements !!");
}