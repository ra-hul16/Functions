#include<iostream>
using namespace std;

void CountZero_One(int arr[],int size){
    int zerocnt=0;
    int onecnt=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocnt++;
        }
        if(arr[i]==1){
            onecnt++;
        }
    }
    cout<<"Number of zeroes in array: "<<zerocnt<<endl;
    cout<<"Number of ones in array: "<<onecnt<<endl;
}

int main(){
    //int n;
    //cout<<"Enter the number of digits to print 0 or 1: "<<endl;   //Just tried by taking input from user by array
    //cin>>n;
    //int arr[n];
    int arr[]={1,0,0,0,1,1,0,1,0,1,0};
    /*for(int i=0;i<n;i++){
        cin>>arr[i];
    }*/
    int size=11;
    CountZero_One(arr,size);

}