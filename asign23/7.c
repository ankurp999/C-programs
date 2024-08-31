#include<stdio.h>
#include<string.h>
int find_word(char s[],char s2[]){
    int l=strlen(s2);
    int i,n,j;
    for(i=0;s[i+l-1];i++){
        n=i;
       for( j=0;j<=l-1;j++){
        if(s[n-1] != s2[j]){
             n++;
            break;
            }
       }
      if(j == l)
      return i;
    }
    return 0;
}
int main(){
    printf("enter a string!!");
    char str[30],word[10];
    gets(str);
    printf("enter the word you want to find !");
    gets(word);
    int i=find_word(str,word);
    if(i)
    printf("found at %d",i);
    else
    printf(" NOT FOUND !!");
    
}