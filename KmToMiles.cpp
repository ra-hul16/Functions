#include<iostream>
using namespace std;

float KmToMiles(float km){
    float Onekm_miles=0.621371;
    float miles= km * Onekm_miles;
    return miles;
}

int main(){
    float km;
    cout<<"Enter KM: ";
    cin>>km;
    float miles=KmToMiles(km);
    cout<<"Miles: "<<miles;

}