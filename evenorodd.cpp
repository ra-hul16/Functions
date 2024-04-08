#include<iostream>
using namespace std;

bool OddorEven(int n){
    if(/*n%2==0*/  (n&1)==0  ){   //using bitwise operator because it is fastest
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    bool isValue= OddorEven(n);

    if(isValue){
        cout<<n<<" is an even number";
    }
    else{
        cout<<n<<" is a odd number";
    }
}
