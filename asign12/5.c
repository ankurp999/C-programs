#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=4;i++){
    char c='A';
    for(int k=i;k>0;k--){
printf(" ");}
for(j=1;j<=(2*4-(2*i-1));j++){
    printf("%c",c++);
}printf("\n");
}
    return 0;
}