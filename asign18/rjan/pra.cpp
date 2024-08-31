#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    cout<<" "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j)
                cout<<arr[i]<<endl;
         }
        for(int j=i;j<3;j++){
            if(i!=j)
                cout<<arr[i]<<" "<<arr[j]<<endl;
         }
        
    }
    return 0;
}