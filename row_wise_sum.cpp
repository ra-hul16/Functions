#include<iostream>
using namespace std;

void RowWiseSum(int arr[3][4],int r,int c){
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<i<<" row: "<<sum<<endl;
    }
}

int main(){


    int arr[][4]={
        {5,6,3,1},{9,2,7,8},{9,3,4,2}
    };
    int r=3;
    int c=4;
    RowWiseSum(arr,r,c);

}