#include<stdio.h>
#include<string.h>
void find_words(char s[]);
int main(){
    char str[50];
    printf("enter strings ");
    gets(str);
    find_words(str);

}
void find_words(char s[])
{
    int c[10]={0},i,o=0,t=0,k=1,m=0;
    char new[][10]={" "};
      c[0]=0;
    for (i=0;s[i];i++){
        if(s[i]==' '){
            c[k++]=i+1;
        }
    
    }
    for (int i=0;s[i];i++)
    {
        if(i==c[m]){
        if(s[i]=='a')
        {
        for(int j=i;s[j]!=' '&& s[j];j++)
        {
        
            new[o][t++]=s[j];
        }
        
        o++;}
        m++;
        t=0;}

    }
    for(int i=0;i<=o;i++){
        printf("%s\n",new[i]);
    }
}