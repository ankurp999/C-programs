#include<stdio.h>
#include<string.h>
void anagram(char s1[],char s2[])
{
    int count=0;
    char copy[20];
    strcpy(copy,s2);
    char n[2][20];
    strcpy(n[0],s1);
    strcpy(n[1],s2);
    if(strlen(s1)==strlen(s2))
    {
        for (int i=0;s1[i];i++)
        {
            for(int j=0;j<strlen(s1);j++)
            {
                if(s1[i]==s2[j]){
                s2[j]=12;
                count++;
                }
                
            }
        }
    }
    if(count==strlen(s1))
    printf("anagram");
    else
    printf("nhi hai bhaii");
}
int main(){
    char str[20]=" ",str1[20]=" ";
    printf("enter two strings ");
    gets(str);
    gets(str1);
    anagram(str,str1);
}