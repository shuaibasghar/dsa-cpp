// // decimal number 5
// #include <iostream>
// using namespace std;

// int main(){
//     int n=10;
//     int ans=0;
//     int pow=1;
//     int iteration=1;
//     while(n>0){
// cout<<"iteration no:"<<iteration<<endl;
//         cout<<"value of n before performing actions  :"<<n<<endl;
//         cout<<"value of ans before performing actions  :"<<ans<<endl;
//         cout<<"value of power before performing actions  :"<<pow<<endl;


//         int rem=n%2;
//         n=n/2;
//         cout<<"value of remainder is   :"<<rem<<endl;
//         cout<<"value of n is  :"<<n<<endl;
//         ans+=(rem*pow);
//         cout<<"value of ans is :"<<ans<<endl;
//         pow=(pow*10);
//         cout<<"value of power is :"<<pow<<endl;
//         iteration++;
//     }
// cout<<"final answer in binary is :"<<ans<<endl;
//     return 0;
// }

// decimal to binary from 1 to n numbers for each one

#include <iostream>
using namespace std;

int decToBinary(int decNum){

    int ans=0;
    int pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;

        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}

binaryToDec(int binNum){
int ans=0;
int pow=1;
while(binNum>0){
    int rem=binNum%10;
    binNum=binNum/10;

    ans+=(rem*pow);
    pow*=2;
}
return ans;
}
int main(){
int n=101010;


    // for(int i=1; i<=n; i++){
    //     cout<<"binary of "<<i<<"="<<decToBinary(i)<<endl;
    // }

  cout<<"decimal of "<<n<<"="<<binaryToDec(n)<<endl;
    
    return 0;
}