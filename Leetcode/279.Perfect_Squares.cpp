/*
https://leetcode.com/problems/perfect-squares/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    int isSquare(int n) {
        int sqrtNum = sqrt(n);
        return (sqrtNum * sqrtNum == n);
    }

// Based on Lagrange's Four Square theorem, there 
// are only 4 possible results: 1, 2, 3, 4.
public:
    int numSquares(int n) {
        if(isSquare(n))  {
            return 1;
        }

        // The result is 4 if and only if n can be written in the 
        // form of 4^k*(8*m + 7). Please refer to 
        // Legendre's three-square theorem.
        while ((n & 3) == 0) {  // n % 4 == 0;
            n >>= 2;
        }
        if ((n & 7) == 7) { // n % 7 == 7
            return 4;
        }

        // Check whether 2 is the result.
        int sqrtNum = sqrt(n); 
        for(int i = 1; i <= sqrtNum; ++i) {
            if (isSquare(n - i * i)) {
                return 2;
            }
        }

        return 3;
    }
};

void solve() {
    Solution obj;
    cout << obj.numSquares(12);
}

int main() {
    solve();
}