#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3};
    int size=3;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}