#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[][2],int row,int col){
    int min_num= INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min_num){
                min_num=arr[i][j];
            }
        }
    }
    return min_num;

}

int main(){


    int arr_two_d[3][2]={
        {3,6},{7,8},{9,2}
    };
    int r=3;
    int c=2;
    cout<<"Minimum Element in 2D array is: "<<findMin(arr_two_d,r,c);


}

