#include<stdio.h>
#include<string.h>
void extract_string(char *str,int start,int end,char *result)
{
    int c=0;
        for(int i=start;i<end;i++)
        {
            *(result+c)=*(str+i);
            c++;
        }
}
int main(){
    char str[30];
    char result[20]=" ";
    printf("enter a string ");
    fgets(str,30,stdin);
    printf("enter start and end index number " );
    int start,end;
    scanf("%d%d",&start,&end);
    extract_string(str,start,end,result);
    printf("%s",result);
}