#include<iostream>
using namespace std;

int CreateNumber(int numofdigits){
    int ans=0;
    for(int i=0;i<numofdigits;i++){
        int digit;
        cout<<"Enter the digit: ";
        cin>>digit;
        ans=ans * 10 + digit;
        cout<<"Number created so far: "<<ans<<endl;
    }
    return ans;
}

int main(){
    int numofdigits;
    cout<<"Enter the number of digits required: ";
    cin>>numofdigits;
    int number=CreateNumber(numofdigits);
    cout<<"Created Number is: "<<number;
}