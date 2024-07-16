//GFG question solved on 8th july
// Given an array arr of positive integers and another number x. Determine whether two elements exist in arr whose sum is exactly x or not.

// Examples:

// Input: x = 16, arr[] = [1, 4, 45, 6, 10, 8]
// Output: true
// Explanation: arr[3] + arr[4] = 6 + 10 = 16

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool TwoPointerApproach(vector<int>& arr,int n, int x){
        // int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<high){
            if(arr[low]+arr[high]==x){
                return true;
            }
            else if(arr[low]+arr[high]>x){
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
    
    
    bool hasArrayTwoCandidates(vector<int>& arr, int x) {
        // code here
         int n=arr.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[i]+arr[j]==x){                    //the code os correct but high complexity
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        sort(arr.begin(),arr.end());
        return TwoPointerApproach(arr,n,x);
        
        
    }

    int main(){
        vector<int>arr={1,4,45,6,10,8};
        int x=16;
        hasArrayTwoCandidates(arr,x);

    }