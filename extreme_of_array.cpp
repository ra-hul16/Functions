#include<iostream>
using namespace std;

void ReverseArray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(left==right){
            cout<<arr[left];
        }
        else{
            cout<<arr[left];
            cout<<arr[right];
        }
        left++;
        right--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    ReverseArray(arr,size);
}