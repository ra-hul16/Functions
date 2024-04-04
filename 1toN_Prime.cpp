#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    int i=2;
    for(i=2;i<n;i++){ 
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        bool isiPrime=isPrime(i);
        if(isiPrime){
            cout<<i<<" ";
        }
    }
}