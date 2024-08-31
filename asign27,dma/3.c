#include<stdio.h>
#include<stdlib.h>
void input(int *p,int n){
     
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
      
    }
}
int add(int *p,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    return sum;
}
int main(){
    int n;
    printf("how many datas you want to enter");
    scanf("%d",&n);
    int *p;
    printf("enter the %d numbers :",n);
    p=(int *)malloc(n*sizeof(int));    
    input(p,n);
    int d=add(p,n);
    printf("the SUM is : %d",d);
    free(p);
    return 0;

}