#include<stdio.h>
#include<string.h>
int check_pelindrome(char s[]);
int main(){
    char str[20]=" ";
    printf("enter a string !");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    if(check_pelindrome(str))
    printf("it is a palindrome string ");
    else
    printf("nhi hai palindrome bhaiii ");
}
int check_pelindrome(char s[])
{
    
    for(int i=0;s[i];i++){
      if(s[i]!=s[strlen(s)-1-i])
      return 0;
    }
    return 1;
}