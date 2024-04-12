#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    int i=2;
    for(i=2;/*i<n*/ i<=sqrt(n)  ;i++){  //sqrt(n) is the optimised soln. This is a fact. A number is said to have a factor less than sqrt(n)
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool Value= isPrime(n);
    if(Value){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime";
    }
}