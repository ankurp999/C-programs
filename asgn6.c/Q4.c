//wap to take matks of 5 subjects from the user .
//assume marks are given out of 100 amd passing mark
//are 33.now display whether the condidate passed the examination or failed .  
#include<stdio.h>
int main(){
    int hin,eng,math,sst,sc;
    printf("enter the marks of the subjects --\nhindi-\nenglish-\nmath\nsocial science-\nscience-" );
    scanf("%d%d%d%d%d",&hin,&eng,&math,&sst,&sc);
    
    
    (hin>=33&&eng>=33&&math>=33&&sst>=33&&sc>=33)?printf("student is passed"):printf("student is failed!");

    return 0;
}