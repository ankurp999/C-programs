#include<stdio.h>
#include<string.h>
int main (){
    printf("enter two strings !");
    char str1[20],str2[20];
    gets(str1);
    gets(str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s",str1);
}