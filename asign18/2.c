// write a program to calculate average of numbers stored in a array of size 10.
#include<stdio.h>
int add(int b[],int n){
    if(n==0)
    return 0;
    return(b[n-1]+add(b,n-1));

}
int main(){
    int a[10],j,i,c;
    float n;
    printf("enter total number of which you want the average !");
    scanf("%f",&n);
    if(n<=10){
        printf("enter %.1f number !",n);
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }}
    else
    printf("please don't enter a number which is greater than 10 !!");

   printf("the average of the number is %.1f",add(a,i)/n);
}
