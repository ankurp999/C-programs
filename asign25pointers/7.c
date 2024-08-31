#include<stdio.h>
void sort(int *p,int a)
{
    int c;
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i;j++){
            c=0;
            if(*(p+j)>*(p+(j+1))){
            c=*(p+j);
            *(p+j)=*(p+(j+1));
            *(p+(j+1))=c;
            }}
    }
}
int main(){
int arr[10];
printf("enter 10 numbers");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
sort(arr,10);
for(int i=0;i<10;i++){
    printf("%d",arr[i]);
}
}