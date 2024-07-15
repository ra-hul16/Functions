#include<iostream>
using namespace std;

void FindMissing(int*arr,int n){
    int i=0;
    while(i<n){
        int index=arr[i]-1;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}


int main(){
    int arr[]={1,3,5,3,4};
    int n= sizeof(arr)/sizeof(int);
    FindMissing(arr,n);


}