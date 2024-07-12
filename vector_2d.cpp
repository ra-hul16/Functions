#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<vector<int>> arr(5,vector<int>(5,0));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> brr;

    vector<int>arr1(10,1);
    vector<int>arr2(7,1);
    vector<int>arr3(5,1);
    vector<int>arr4(3,1);

    brr.push_back(arr1);
    brr.push_back(arr2);
    brr.push_back(arr3);
    brr.push_back(arr4);

    for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}