#include <iostream>
#include <climits> //for INT_MAX INT_MIN
using namespace std;

int main() {
    int num = 123;
    int ans = 0;
    while (num != 0) {
        int digit = num % 10;
        num = num / 10;

        // Check for overflow before multiplying and adding
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
            cout << 0 << endl;
            return 0;
        }
        ans = ans * 10 + digit;
    }
    cout << ans << endl;
    return 0;
}