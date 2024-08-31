#include<stdio.h>
#include<string.h>
int main(){
    char str[20],s[20]="\0";

    int i,j,k,count=0;
    printf("enter a string !");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for( i=0;str[i]==' ';i++);
    for(j=strlen(str)-1;str[j]==' '||str[j]=='\t';j--){
        count++;
    }
    for(k=i;k<strlen(str)-count;k++){
         s[k-i]=str[k];
    }
    printf("\n'%s'",s);
    
}