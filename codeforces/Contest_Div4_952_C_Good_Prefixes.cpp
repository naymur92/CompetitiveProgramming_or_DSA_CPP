/*
https://codeforces.com/contest/1985/problem/C
*/

#include <bits/stdc++.h>


typedef unsigned long long ul;
typedef unsigned long long ull;

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ul> numbers(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> numbers[i];
        }
        
        int count_good = 0;
        ull sum = numbers[0];
        if(sum == 0) count_good++;
        for (int i = 1; i < n; ++i)
        {
            sum += numbers[i];
            sort(numbers.begin(), numbers.begin() + i + 1);
            if(sum == 2 * numbers[i])
            {
                count_good++;
            }
            
        }
        cout << count_good << endl;
    }
}


/*
7
1
0
1
1
4
1 1 2 0
5
0 1 2 1 4
7
1 1 0 3 5 2 12
7
1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 294967296
10
0 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 589934592

*/

/*
1
0
3
3
4
1
2

*/