//write a function to merge two arrays of the same size sorted in descending order
#include<stdio.h>
int merge(int a[], int b[]){
    int new[10];
    for(int i=0;i<=10-1;i++){
        if(i<5){
        new[i]=a[i];}
        if(i>=5){
            new[i]=b[i-5];
        }
    }
    for(int i=0;i<=9;i++){
        for(int j=0;j<9-i;j++){
            if(new[j]<new[j+1]){
                new[j]=new[j]+new[j+1];
                new[j+1]=new[j]-new[j+1];
                new[j]=new[j]-new[j+1];
            }
            
        }
    }
    for(int i=0;i<=10-1;i++){
        printf("%d ",new[i]);
    }
}
int main(){
    int n=5;
    int a[5]={1,5,47,6,5};
    int b[5]={5,19,12,66,9};
    merge(a,b);
}