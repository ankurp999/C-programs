#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="my name is ankur";
    int c[10],i,k=0,l=0,m;
    char sttr[4][6]={ };
    c[k]=0;
    for( i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            c[++k]=i+1;
        }
    }
    int j,n=0;
    for(i=0;str[i];i++)
    { 
        if(i==c[n]){
    
        for(m=0,j=i ; str[j]!=0 && str[j] !=32 ; m++)
        {
           sttr[n][m]=str[j++];
        }
        n++;
        }
    
    }
    for(i=0;i<4;i++){
        printf("\n%s",sttr[i]);
    }
}
