#include<stdio.h>
void search_all_occurence(char *p,char a,int *q)
{
    int l=0;
    for(int i=0;*(p+i);i++)
    {
        if(p[i]==a)
        {
           *(q+l)=i;
           l++; 
        }
    }
}
int main(){
    char str[30],a;
    int arr[10]={0},i;
    printf("enter a string");
    gets(str);
    printf("enter a charecter");
    scanf("%c",&a);
    search_all_occurence(str,a,arr);
    for(i=0;arr[i];i++);
    printf("the frequency of %c is = %d",a,i);

}