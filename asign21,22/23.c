#include<stdio.h>
#include<string.h>
int check_alphanumeric(char s[]);
char* swap_two_char(char s[],int a, int b);
int count_the_vovels(char s[]);
int main (){
    char str[20]=" ";
    int a,b;
    printf("enter a string !");
    fgets(str,20,stdin);
    /*printf("%s",strupr(str));
    printf("\n\n%s",strlwr(str));*/
   // printf("total no of vovels are %d ",count_the_vovels(str));
    //   printf("enter the indecies numbers (starts from 0 )!!");
    //   scanf("%d%d",&a,&b);
    //   printf(" the swaped string is %s ",swap_two_char(str,a,b));
    if(check_alphanumeric(str))
    printf("alphanumeric");
    else
    printf("not a alphanumeric");
}
int count_the_vovels(char s[]){
    char c[]="aeiou";
    int i,j,count=0;
    for(i=0;s[i];i++){
       for(j=0;j<=4;j++){
           if(s[i]==c[j])
           count++;
       }
    }
    return count;
}
char* swap_two_char(char s[],int a, int b){
    char c;
    c=s[a];
    s[a]=s[b];
    s[b]=c;
    return s;
    }
int check_alphanumeric(char s[]){
    int i,count1=0,count=0;
  for (i=0;s[i];i++){
       if(s[i]<=9&& s[i]>=1)
        count1++;
        if(((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')))
        count++;
        if((count+count1)==2)
        return 1;
  }
  return 0;
  
}
