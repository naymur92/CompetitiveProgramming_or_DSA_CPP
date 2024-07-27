/*
https://codeforces.com/contest/1996/problem/A
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

        int count_animal = 0;
        count_animal += (n / 4);

        n %= 4;
        count_animal += (n / 2);
        cout << count_animal << "\n";
    }
}


/*
3
2
6
8
*/

/*
1
2
2
*/