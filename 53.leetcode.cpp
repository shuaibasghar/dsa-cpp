#include<iostream>
using namespace std;
// 53. Maximum Subarray

int main() {
    int n=5;
    int arr[5]={5,4,-1,7,8};
    int maxSum=INT_MIN;
   int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0) currSum=0;
        maxSum=max(maxSum,currSum);
    }
    cout<<"maxium subarray sum is "<<maxSum;
    return 0;
}