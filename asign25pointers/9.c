#include<stdio.h>
void shift(int *arr,int a)
{
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++)
        {
            if(*(arr+j)>*(arr+j+1)){
                int c=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=c;
            }
        }
    }
}
int main(){
    int arr[9];
    printf("enter 9 numbers\n");
    for( int i=0;i<9;i++){
        scanf("%d",&arr[i]);
    }
    shift(arr,9);
    for( int i=0;i<9;i++){
        printf("%d",arr[i]);
    }
}