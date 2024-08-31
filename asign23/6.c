#include<stdio.h>
#include<string.h>
void frequency(char s[]){
    char ch[20]  ={'\0'};
    for(int i=0;s[i];i++){
        int count =0;
        int flag = 1;
        int temp =0;
    
            while(ch[temp]){
                if(s[i] == ch[temp++]){
                flag = 0;
                break;}
                else
                flag = 1;
            }
        for(int j =0;s[j];j++){
            if(flag == 1){
            if(s[i] == s[j])
            count++;
            }
           else break;
        }
           if(flag == 1)
           printf("\n%c   %d",s[i],count);

           ch[i]=s[i];
}printf("\n\n %s",ch);
}
int main(){
    char str[20];
    printf("enter a string =");
    gets(str);
    frequency(str);
}