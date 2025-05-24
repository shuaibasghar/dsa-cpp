// 231. power of 2 true return true otherwise false and must lie in between the range of integers 2^31

#include <iostream>
#include <cmath>  
#include <climits>
using namespace std;

bool isPowerOfTwo(int n) {
    // Edge case: if n is non-positive, it can't be a power of 2
    if (n <= 0) {
        return false;
    }
    // brutforce technique
    // for(int i = 0; i <= 30; i++) {
    //     int ans = pow(2, i);
    //     if (ans == n) {
    //         return true;
    //     }
    // }
    int ans=1;
    for(int i = 0; i <= 30; i++) {
        // int ans = pow(2, i);
        if (ans == n) {
            return true;
        }
        // for checking 0;
        if(ans<INT_MAX/2)
        ans = ans*2
    }
    return false;
}

int main() {
    int n = 4;
    bool result = isPowerOfTwo(n);
    
    cout << n << " is " << (result ? "" : "not ") << "a power of 2" << endl;
    
    return 0;
}