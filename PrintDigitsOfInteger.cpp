#include<iostream>
using namespace std;

void PrintDigits(int n){
    while(n){              //while(n>0)  both signify the same thing...in while(n), it will go into the loop only if n is 1 or else it wont go in
        int digit=n%10;
        cout<<"Digit: "<<digit<<endl;;
        n/=10;
    }
}

int main(){
    int n;
    cin>>n;
    PrintDigits(n);
}