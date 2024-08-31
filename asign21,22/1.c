#include<stdio.h>
#include<string.h>
int first_occurrence_of_character(char s[],char c);
int count_spaces(char s[]);
void copy_string(char s[]);
void count_sapartly(char []);
void reverse(char []);
void convert_into_uppercase(char s[]);
void convert_into_lowercase(char s[]);
int occurrence_of_given_number(char [],char);
int count_vovels(char []);
int count(char[]);
int main(){
    char str[20],c;
    printf("enter a string ");
    fgets(str,20,stdin);
   // printf("the length of the string is %d",count(str));
    printf("\nenter the character whose occurrence you want to check !");
    scanf("%c",&c);
    printf("the first occurrence of %c in %s is %d",c,str, first_occurrence_of_character(str,c));
    if(first_occurrence_of_character(str,c)==0)
    printf("\n** where 0 denotes that the entered character is absent !!");
    //   printf("\nthe total number of vovels are %d",count_vovels(str));
    //   printf("the total numbers of sapces %d", count_spaces(str));
      // convert_into_uppercase(str);
      // convert_into_lowercase(str);
     // copy_string(str);
}
int count(char s[])
{
    int i;
    for(i=0;s[i];i++);
    s[i-1]='\0';
    for(i=0;s[i];i++);
    return i;
}
int occurrence_of_given_number(char s[],char c)
{
    int i,temp=0;
    for(i=0;s[i];i++){
        if(c==s[i])
        temp++;
    }
    return temp;
}
int count_vovels(char s[]){
    char cmp[5]="aeiou";
    int i,temp=0;
    for(i=0;s[i];i++){
        for(int j=0;j<=5;j++){
            if(s[i]==cmp[j]){
                temp++;
            }
        }
    }
    return temp;
}
int count_spaces(char s[]){
    int temp=0;
    for(int i=0;s[i];i++){
        if(s[i]==' '){
            temp++;
        }
    }
    return temp;
}
void convert_into_uppercase(char s[])
{
    int i;
    char c[20];
    for(i=0;s[i];i++){
        if(s[i]>='a' && s[i]<='z')
        c[i]=s[i]-32;
        else
        c[i]=s[i];
    }
    for(i=0;s[i];i++)
    printf("%c",c[i]);
}
void convert_into_lowercase(char s[])
{
    int i;
    char c[20];
    for(i=0;s[i];i++){
        if(s[i]>='A' && s[i]<='Z')
        c[i]=s[i]+32;
        else
        c[i]=s[i];
    }
    for(i=0;s[i];i++)
    printf("%c",c[i]);
}
void reverse(char s[])
{
   // printf("\n");
    int i;
    for(i=count(s)-1;i>=0;i--){
        printf("%c",s[i]);
    }
}
void count_sapartly(char s[])
{
    int temp1=0,temp2=0,temp3=0;
    for(int i=0;s[i];i++){
        if((s[i]<='z'&& s[i]>='a')||(s[i]<='Z'&& s[i]>='A'))
        temp1++;
        else if(s[i]<=57&& s[i]>=48)
        temp2++;
        else
        temp3++;

    }
    printf("total number of alphabates is %d and digits %d and special character %d",temp1,temp2,temp3-1);
}
void copy_string(char s[])
{
    char c[20];
    strcpy(c,s);
    printf("%s",c);
} 
int first_occurrence_of_character(char s[],char c)
{
    int i;
    for(i=0;s[i];i++){
        if(s[i]==c)
        return i+1;
    }
    return 0;
}