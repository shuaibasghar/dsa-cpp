#include <iostream>

// #include <climit>
using namespace std;
int main(){
    int nums[]={22,1,-15,4,3};
    int size=5;
    int smallest=INT_MAX;
int largest=INT_MIN;
int index=0;
    for(int i=0; i<size;i++){
        // if(nums[i]<smallest){
        //     smallest=nums[i];
        // }
        // you can also write the below short cut inbuilt min function
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
        if(nums[i]==largest){
            index=i;
        }


    }
    cout<<smallest;
    cout<<largest<<endl;
    cout<<index;



}