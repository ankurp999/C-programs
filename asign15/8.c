//write a function to print pascal triangle (TSRN)
// #include<stdio.h>
// void add(int,int);
// int main(){
//     int i,j,n=8;
//     for(i=0;i<n;i++){
//         for(int k=i;k<n;k++){
//             printf(" ");
//         }
//         for(j=0;j<(i+1);j++){
            

//             add(i,j);
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
// void add(int a,int b){
    
//     int m,n;
//     for( m=1,n=1;a>0&&b>=1;a--,b--){
//         m=m*a;
//         n=n*b;
//     }
//     int c;
//     c=m/n;
//     printf("%d ",c);
// }
#include<stdio.h>
int fact(int);
void pascal(int ,int);
int main()
{
int i,j,n=6;
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
    printf(" ");
    }
    for(j=0;j<=i;j++){
        pascal(i,j);
    }
    printf("\n");
    
}
return 0;
}
int fact(int b){
    int a=1;
    while(b>1){
        
     a=a*b;
      b--;
    }
    return a;
}
void pascal(int a, int b ){
    int c;
    c=fact(a)/(fact(a-b)*fact(b));
    printf(" %2d",c);
}