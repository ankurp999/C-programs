#include<stdio.h>
#include<string.h>
void swap_string(char *str1,char *str2)
{
    char str[30];
    strcpy(str,str1);
    strcpy(str1,str2);
    strcpy(str2,str);
}
int main(){
    char str1[30],str2[30];
    printf("enter two strings ");
    fgets(str1,30,stdin);
    fgets(str2,30,stdin);
    swap_string(str1,str2);
    printf("%s%s",str1,str2);
}