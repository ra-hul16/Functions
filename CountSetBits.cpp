//Count the number of 1s in the binary num, Set bits means numbers that are 1 in binary number
#include<iostream>
using namespace std;

int CountSetbit(int n){
    int count=0;
    while(n>0){
        int bit=n&1;       //int bit=n%2;   (Two Methods)
        if(bit==1){        //Using bitwise operator is fastest. The commented lines is using division
            count++;
        }
        n=n>>1;            //n=n/2;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int Setbits=CountSetbit(n);
    cout<<Setbits;
}