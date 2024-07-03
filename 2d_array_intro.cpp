#include<iostream>
using namespace std;

void Two_dim_array(int arr[3][2],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int arr_two_d[3][2]={
        {3,4},{7,8},{9,2}
    };
    int r=3;
    int c=2;
    Two_dim_array(arr_two_d,r,c);


}