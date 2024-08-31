#include<stdio.h>
#include<string.h>
int main(){
    int m=0;
    char str[6][15];
    printf("enter names ");
    for(int i=0;i<6;i++)
    {
        gets(str[i]);
    }
    int i;
    for(i=0;i<6;i++)
    {
       for(int j=i;j<6;j++){
        if(strcmp(str[i],str[j+1])==0)
        {
           str[j+1][0]='\0';
        }
       }
    }
     for(int i=0;i<6;i++)
    {
        printf("\n%s",str[i]);
    }
}