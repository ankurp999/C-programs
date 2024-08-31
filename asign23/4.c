#include<stdio.h>
#include<string.h>
void reverse_word( char s[]){
    char c[30]=" ";
    for( int i=0; s[i]; i++){
        c[strlen(s)-1-i]=s[i];
    }
    
    for(int i=0;c[i];i++){
        if(c[i]==32){
        printf(" ");
        
        for(int j=i-1;c[j]!=' '&& c[j]&& j>=0;j--)
        printf("%c",c[j]);
        }
    }
}
int main(){
    char str[30]=" ";
    char s[30]=" ";
    printf("enter a string");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;i<strlen(str);i++){
        s[i+1]=str[i];
    }
    s[0]=32;
    printf(" ha bhai neeche dekho ab !\n");
    reverse_word(s);
}
