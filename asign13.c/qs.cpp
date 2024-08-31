#include<iostream>
using namespace std;
int partition(int arr[],int s ,int e){
    int i,count=0;
    int pivot=arr[s];
    for( i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
        count++;
    }
    int pivotindex=count+s;
    swap(arr[pivotindex],arr[s]);
     i=s;
    int j=e;
    while(i<pivotindex && pivotindex<j){
        while(arr[i]<=pivot)
          i++;
        while(arr[j]>=pivot)
        j++;
        if(i<pivotindex && pivotindex<j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
    }
    return pivotindex;
}
void qS(int arr[],int s ,int e){
    int pivot;
    if(s>=e)
    return ;
    pivot= partition(arr,s,e);
    qS(arr,s,pivot-1);
    qS(arr,pivot+1,e);
    
}
int main(){
    int arr[]={3,1,4,5,2};
    qS(arr,0,4);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
}