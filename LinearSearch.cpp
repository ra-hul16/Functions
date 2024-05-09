#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,9,10,12};
    int n=7;
    int targetElement=1;
    bool flag=0;  //0 means element not found....1 means element found
    for(int i=0;i<n;i++){
        if(arr[i]==targetElement){
            flag=1;
            break;
        }

    }
    if(flag==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}