#include <stdio.h>
#include <string.h>
void display(char s[][10], int b);
void find_words(char s[])
{
    int c[10]={0},k=1,i,flag=0,m=0,o=0,t,j;
    char new[][10]={" "};
      c[0]=0;
    for (i=0;s[i];i++){
        if(s[i]==' '){
            c[k++]=i+1;
        }
    }
    for (i=0;s[i];i++)
    {
        if(i==c[m])
        {
            for(j=i;s[j]!= ' '&& s[j];j++)
            {
                if(s[j]=='s'&&(s[j+1]==' '||j==strlen(s)-1))
                flag=1;
            }
            if(flag==1){
                t=0;
                for(int k=i;s[k]!=' '&& s[k];k++)
                {
                   new[o][t++]=s[k];
                }
                o++;
                flag=0;
            }
            m++;
        }
    }
    
    
    display(new,o);}


void display(char s[][10], int b)
{
    for (int i = 0; i <= b; i++)
    {
        printf("%s\n", s[i]);
    }
}
int main()
{
    char str[50] = " ";
    printf("enter a string ");
    gets(str);
    
    find_words(str);
}