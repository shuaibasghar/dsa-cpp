#include <iostream>
#include <vector>

using namespace std;

// vector<int> pairSum(vector<int> arr, int target){
//     vector<int> ans;
//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = i+1; j < arr.size(); j++){
//             if (arr[i]+arr[j]==target){
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 return ans;
//             }

//         }
    
//     }
//     ans.push_back(-1);
//     return ans;
    
// }
// int main (){
   
//     vector<int> arr={2,7,11,15};
//     int target=9;
//     vector<int> ans=pairSum(arr,target);
//    cout<<"pair sum is "<<ans[0];
//    cout<<ans[1];

//     return 0;
    
// }


// by using two pointer approach
vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    int n=arr.size();
 int i=0,j=n-1;
 while(i<j){
    int pairSum= arr[i]+arr[j];
    if(pairSum>target){
        j--;
    }else if(pairSum<target){
        i++;
    } else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
 }

          

    return ans;
    
}
int main(){
     vector<int> arr={2,7,11,15};
    int target=9;
    vector<int> ans=pairSum(arr,target);
    if(!ans.empty()){
        cout<<"pair indices are "<<ans[0]<<" and "<<ans[1]<<endl;
        cout<<"values are "<<arr[ans[0]]<<" and "<<arr[ans[1]]<<endl;
    } else {
        cout<<"No pair found"<<endl;
    }

 
   return 0;
}