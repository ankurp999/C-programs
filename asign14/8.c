//write a function to calculate the number of arrengments 
//one can make from n items and r slected at a time;
#include<stdio.h>
float ass(float,float);
int main(){
  float x,y,z;
  printf("enter total numbers");
  scanf("%f",&x);
  printf("enter total selections");
  scanf("%f",&y);
  z=ass(x,y);
  printf("total arrengements%.2f",z);
  return 0;
}
float ass(float a,float b){
    int i,j,e;
    e=a;
    float c;
    for(i=1;a>1;a--){
        i=i*a;
    }
     
    float d;
    d=e-b;
    for(j=1;d>1;d--){
        j=j*d;
    }
   
c=i/j;
return c;
}   