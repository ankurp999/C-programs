#include<stdio.h>
#include<string.h>
int case_insenstive(char s[], char d[]){
    strupr(s);
    strupr(d);
   return strcmp(s,d);
}
int main(){
    char str1[20],str2[20];
    printf("Enter two strings :) ");
    gets(str1);
    gets(str2);
    if(case_insenstive(str1,str2))
    printf("not same");
    else
    printf("same");
}