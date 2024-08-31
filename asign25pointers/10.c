#include<stdio.h>
void function(int **q,int *size)
{
    int m=*(*(q));
    for(int i=0;i<5;i++){
        for(int j=0;j<*(size+i);j++){
            if(m<*(*(q+i)+j))
            m=*(*(q+i)+j);
        }
    }
    printf("the highest marks is %d",m);
}
int main(){
    int class1[12];
    int class2[14];
    int class3[13];
    int class4[15];
    int class5[11];
    int size[5]={12,14,13,15,11};
    int *p[5];
    p[0]=class1;
    p[1]=class2;
    p[2]=class3;
    p[3]=class4;
    p[4]=class5;
    for(int i=0;i<5;i++)
    {
        printf("\nenter %d students number of class%d\n",size[i],i+1);
        for(int j=0;j<size[i];j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
    function(p,size);
}