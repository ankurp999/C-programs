#include<stdio.h>
void merge(int *arr1,int *arr2, int a,int b,int *arr3)
{
    int i;
    for( i=0;i<a;i++){
        *(arr3+i)=*(arr1+i);
    }
    for(int j=0;j<b;j++){
        *(arr3+i++)=*(arr2+j);
    }
}
int main(){
    int arr1[5]={8,5,2,5,4},arr2[8]={3,4,5,6,7,5,6,5},arr3[15]={0 },a=5,b=8;
    merge(arr1,arr2,a,b,arr3);
    for(int i=0;arr3[i];i++){
        printf("%d",arr3[i]);
    }
}