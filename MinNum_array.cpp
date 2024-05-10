#include<iostream>
#include<limits.h>
using namespace std;

int MinNumof_Array(int arr[],int size){
    int min_num=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min_num){
            min_num=arr[i];
        }
    }
    return min_num;

}

int main(){
    int arr[]={45,6,30,3,25};
    int size=5;
    int min_value=MinNumof_Array(arr,size);
    cout<<"Minimum value of the array is: "<<min_value;


}