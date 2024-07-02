#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    cout<<"The vector elements are: "<<endl;
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }


}

int main(){
    vector<int>b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        b.push_back(data);
    }
    print(b);

}