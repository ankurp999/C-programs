#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("enter two strings !");
    fgets(str1,20,stdin);
    fgets(str2,20,stdin);
      str1[strlen(str1)-1]='\0';
      str2[strlen(str2)-1]='\0';

    int c=strcmp(str1,str2);
    if(c<0)
    printf("%s comes before %s",str1,str2);
    else if(c>0)
    printf("%s comes after %s ",str1,str2);
    else 
    printf("both strings are same ");
}