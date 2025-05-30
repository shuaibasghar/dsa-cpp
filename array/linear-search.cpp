// arr[]={4,2,1,7,8,3} target=8
#include<iostream>
using namespace std;
 int findIndex(int arr[],int size,int target){
for(int i=0;i<size;i++){
    if(arr[i]==target){
        return i;
    }
}
return -1;
}
int main(){
    int arr[]={4,2,1,7,8,3};
    int target=8;
    int size=6;
    int res=findIndex(arr,size,target);
    cout<<res;
    return 0;
}


