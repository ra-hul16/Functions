#include<iostream>
using namespace std;

void transpose(int arr[4][4], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void printarray(int arr[][4],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4]={
        {2,4,6,8},{3,6,9,12},{4,8,12,16},{5,10,15,20}
    };
    int r=4;
    int c=4;
    cout<<"Array before Transpose: "<<endl;
    printarray(arr,r,c);

    cout<<"Doing Transpose: "<<endl;
    transpose(arr,r,c);

    cout<<"Array after Transpose: "<<endl;
    printarray(arr,r,c);
}