#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;  //once element found...returns true and comes out of loop
        }
    }
    return false;     //it will come out of for loop only if target element is not present..so return false
}

int main(){
    int brr[5]={2,4,6,8,10};
    int Size=5;
    int goal=8;
    bool ans=LinearSearch(brr,Size,goal);
    if(ans==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}