#include<iostream>
using namespace std;

int reverseNum(int n){
    int ans=0;
    bool isNegative=false;
    if(n<0){
        isNegative=true;
        n=-n;
    }
    while(n!=0){
        int digit=n%10;
        ans=ans*10 + digit;
        n=n/10;
    }
    return isNegative? -ans:ans; 
}

int main(){
    int n;
    cin>>n;
    int reverse=reverseNum(n);
    cout<<"Reversed Num: "<<reverse;
}

