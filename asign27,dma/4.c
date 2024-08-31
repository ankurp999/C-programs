#include<stdio.h>
#include<stdlib.h>
void input (int *p,int n){
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
}
int* merge(int *p,int *q,int n,int m,int *r,int o){
    
    int j=0;
    r=(int*)malloc(o*sizeof(int));
    for(int i=0;i<o;i++){
        if(i>=n){
            *(r+i)=*(q+j++);
        }
        else{
        *(r+i)=*(p+i);
        }

    }

    return r;
}
int main(){
    int *p,*q,*r;
    int n,m,o;
  
    int *s;
    printf("enter the size of first array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    input(p,n);
    s=(int*)malloc(o*sizeof(int));
    printf("enter the size of second array: ");
    scanf("%d",&m);
    q=(int*)malloc(m*sizeof(int));
    input(q,m);
      o=m+n;
    r=merge(p,q,n,m,s,o);
        
    for (int i=0;i<o;i++)
    {
        printf("%d ",*(r+i));
    }
    free(p);
    free(q);
    free(r);
    free(s);
    return 0;
}