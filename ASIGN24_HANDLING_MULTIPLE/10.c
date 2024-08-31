#include<stdio.h>
#include<string.h>
void checking_mail(char s[][30])
{int m,count=0;
    char test[]="@gmail.com";
    for(int i=0;i<10;i++){
        m=9;
        for (int j=strlen(s[i])-1;j>strlen(s[i])-10;j--){
            if(test[m]!=s[i][j])
            break;
            m--;
        }
        if(m==0){
            count++;
        }
    }
    printf("there are %d mails which has gmail.com extension",count);
}
int main (){
    char str[10][30];
    printf("please enter 10 mail addresses ");
    for(int i=0;i<10;i++){
       gets(str[i]); 
    }
  checking_mail(str);
}
