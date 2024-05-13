#include<iostream>
using namespace std;

void Shift_Element_By1(int arr[], int size){
    int temp=arr[size-1];                   //storing last element in temporary variable
    for(int i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

 int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    Shift_Element_By1(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }