
#include<iostream>
// #include <climits>
using namespace std;


// maximum subarray sum

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    // int arr[7]={3,-4,5,4,-1,7,-8};

    // for just printing subarrays

    // for start
    // for(int st=0;st<n;st++){
    //     // for end
    //     for(int end=st; end<n;end++){
    //         // for printing possible sub arrays
    //         for(int i=st;i<=end;i++){
    //             cout << arr[i];

    //         }
    //         cout<<" ";
            
    //     }
    //     cout<<endl;
    // }


    // for finding sum of maxSubarray

    int maxSum=INT_MIN;

    // for(int st=0; st<n;st++){
    //     int currSum=0;
    //     for(int end=st;end<n;end++){
    //         currSum+=arr[end];
            
    //         maxSum=max(currSum,maxSum);
    //     }
    // }


    // by using KADANE'S ALGORITHM
    // time complexity O(n)
    // space complexity O(1)
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0) currSum=0;
        maxSum=max(maxSum,currSum);
    }
    cout<<"maxium subarray sum is "<<maxSum;
    return 0;
}