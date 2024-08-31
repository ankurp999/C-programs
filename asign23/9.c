#include<stdio.h>
#include<string.h>
void capital(char s[]){
    int arr[10],k=0;
    arr[0]=0;
    for(int i=0;s[i];i++){
        if(s[i]==32){
          arr[++k]=i+1;
        }
    }
    // for(int j=0;j<=k;j++){
       // printf("%d",k);
    // }
    
    for(int i=0;s[i];i++){
        int flag=0;
        for(int j=0;j<=k;j++){
        if(i==arr[j])
        flag=1;}
        if(flag)
        printf("%c",s[i]-32);
        else
        printf("%c",s[i]);
    } 
    }

int main (){
    printf("enter any string !");
    char str[30];
    gets(str);
    capital(str);
}