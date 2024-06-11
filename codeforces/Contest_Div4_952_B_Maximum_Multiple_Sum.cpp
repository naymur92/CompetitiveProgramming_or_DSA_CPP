/*
https://codeforces.com/contest/1985/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int max_sum = 0;
        int x;
        for (int i = 2; i <= n; ++i)
        {
            int sum = 0;
            for (int k = 1; k * i <= n; ++k)
            {
                sum = sum + k * i;
            }
            if (sum > max_sum)
            {
                max_sum = sum;
                x = i;
            }

        }
        cout << x << endl;
    }
}


/*
2
3
15
*/

/*
3
2

*/