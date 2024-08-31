// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
int count_word( char s[] ){

    int count=0,i,j;
    for( i = 0; s[i]; i++ ){
    
        if( s[i] != 32 ){
            
            count++;
            for( j = i;s[j] != 32&&s[j] ; j++ ){ 
                i++;
                
            }
        }  
    }
    return count;
}
int main(){
    char str[50]=" ";
    printf("enter a string ");
    gets(str);
//str[strlen(str)-1]='\0';
    printf("total number of word in %s is %d ",str,count_word(str));

    return 0;
}
