#include<stdio.h>
#include<string.h>
void repeating(char s[][20]);
int main(){
    char str[5][20]={" "};
    printf("enter 5 strings ");
    for(int i=0;i<5;i++){
        gets(str[i]);
    }
    for(int i=0;i<5;i++){
        strupr(str[i]);
    }

    repeating(str);
}
void repeating(char s[][20])
{
    int m=0;
    int store[26]={0},count=1,t=0,n;
    for (char i='A';i<='Z';i++){
        if(t<5){
        for(int j=0;s[t][j];j++)
    {
       if( s[t][j]==i){
        count++;
       }
       if(!s[t][j+1]){
        j=0;
        ++t;
       }}
    }
    store[m++]=count;
    count=0;
    t=0;
    }
    
   int copy[26];
    for (int i=0;i<26;i++)
    {
    
        copy[i]=store[i];
         n=store[i]>store[i+1]?store[i]:store[i+1];
         store[i+1]=n;
    }
    
    for (int i=0;i<26;i++)
    {
        if(store[26]==copy[i]){
            printf("the frequency of %c is= %d ",(65+i),store[26]);
            break;
        }
    }
}