#include<iostream>
using namespace std;

bool LinearSearch(int arr[3][2],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (arr[i][j]==target){
                return true;
            }
        }

    }
    return false;

}

int main(){
    int arr_two_d[3][2]={
        {3,4},{7,8},{9,2}
    };
    int r=3;
    int c=2;
    int tar=9;
    cout<<"Element found or not: "<<LinearSearch(arr_two_d,r,c,tar);


}