#include<iostream>
using namespace std;

int UniqueElement(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];             //^ represents XOR operator
    }
    return ans;

}

int main(){
    int arr[]={2,4,6,7,5,7,2,4,6};
    int size=9;
    int unique_value=UniqueElement(arr,size);
    cout<<"The Unique element is: "<<unique_value;
}
