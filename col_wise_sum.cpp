#include<iostream>
using namespace std;

void ColWiseSum(int arr[3][4],int r,int c){
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<j<<" column: "<<sum<<endl;
    }
}

int main(){


    int arr[][4]={
        {5,6,3,1},{9,2,7,8},{9,3,4,2}
    };
    int r=3;
    int c=4;
    ColWiseSum(arr,r,c);

}