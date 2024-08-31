#include<stdio.h>
#include<string.h>
void reverse(char []);
int main(){
      char str[20];
      printf("enter a string !");
      fgets(str,20,stdin);
      printf(" THE LENGHT OF THE STRING IS %d",strlen(str)-1);
      printf("\n");
      reverse(str);
      
}
void reverse(char s[]){
    char c[20]=" ";
    int i,l=strlen(s)-2;
    for(i=l;i>=0;i--){
         c[l-i]=s[i];
    }
    printf("%s",c);
}