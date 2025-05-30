// find majority element in array whose frequency is greater then n/2 return that element.

#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

// int majorityElement(vector<int>& nums) {\
//     for(int val:nums){
//         int frequency=0;
//         for(int element:nums){
//             if(val==element){
//                 frequency++;
//             }
//             if(frequency>nums.size()/2){
//                 return val;
//             }
//             }
//     }
//     return -1;

// }
// int main(){
//     vector<int> arr={1,2,2,1,1};
//     cout<<majorityElement(arr);
//     return 0;


// }


// 2nd approach

int majorityElement(vector<int>& nums) {
   int n=nums.size();

   //sorting
   sort(nums.begin(),nums.end());
   int freq=1;
   int ans=nums[0];
for (int i=1;i<n;i++){
    if(nums[i]==nums[i-1]){
        freq++;
    }
    else{
        freq=1;
        ans=nums[i];
    }
    if(freq>n/2){
        ans=nums[i];
       return ans;
    }
}
return ans;


}
int main(){
    vector<int> arr={1,2,2,1,1};
    cout<<majorityElement(arr);
    return 0;


}