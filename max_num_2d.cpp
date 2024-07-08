#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][2],int row,int col){
    int max_num= INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max_num){
                max_num=arr[i][j];
            }
        }
    }
    return max_num;

}

int main(){


    int arr_two_d[3][2]={
        {3,1},{7,8},{9,2}
    };
    int r=3;
    int c=2;
    cout<<"Maximum Element in 2D array is: "<<findMax(arr_two_d,r,c);


}

