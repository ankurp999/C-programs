#include<stdio.h>
#include<string.h>
void sort(char [][20]);
void display(char [][20]);
void input(char [][20]);
void input(char s[][20]){
    for(int i=0;i<10;i++){
        gets(s[i]);
    }
    sort(s);
}
void sort(char s[][20])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            char temp[20]=" ";
            if(strcmp(s[j],s[j+1])>0)
            {
               strcpy(temp,s[j]);
               strcpy(s[j],s[j+1]);
               strcpy(s[j+1],temp);
            }
        }
    }
    display(s);
}
void display(char s[][20])
{
    for(int i=0;i<10;i++)
    {
        printf("%s",s[i]);
    }
}
int main(){
    char str[10][20];
    printf("\nenter 10 cities name !");
    input(str);
}