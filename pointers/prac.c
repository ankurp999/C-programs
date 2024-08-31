#include<stdio.h>
void input(int **,int[]);
void display(int **,int[]);
int main(){
    int a[5],b[6],c[3],d[8],size[]={5,6,3,8};
    int *p[4];
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
   input(p,size);
   display(p,size);
}
void input(int **q,int size[]){
    for(int i=0;i<4;i++){
        printf("\nenter %d numbers ",size[i]);
        for( int j=0;j<size[i];j++){
            scanf("%d",*(q+i)+j);
        }
    }
}
void display(int **q,int size[])
{
    for(int i=0;i<4;i++)
    {
        printf("\n");
        for(int j=0;j<size[i];j++)
        {
            printf("%d",*(*(q+i)+j));
        }
    }
}