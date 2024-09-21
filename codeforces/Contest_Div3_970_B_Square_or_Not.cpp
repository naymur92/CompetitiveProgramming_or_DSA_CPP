/*
https://codeforces.com/contest/2008/problem/B
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
        string s;
        cin >> s;

        int size_n = sqrt(n);

        if (size_n * size_n != n) cout << "NO\n";
        else {
            int index = 0;
            bool match = true;
            for (int i = 0; i < size_n; ++i) {
                for (int j = 0; j < size_n; ++j) {
                    if (i == 0 || i == size_n - 1 || j == 0 || j == size_n - 1) {
                        if (s[index] != '1') {
                            match = false;
                            break; 
                        }
                    } else if (s[index] != '0') {
                        match = false;
                        break;
                    }
                    index++;
                }
            }
            cout << (match ? "YES\n" : "NO\n");
        }
    }
}


/*
5
2
11
4
1111
9
111101111
9
111111111
12
111110011111

*/

/*
No
Yes
Yes
No
No

*/