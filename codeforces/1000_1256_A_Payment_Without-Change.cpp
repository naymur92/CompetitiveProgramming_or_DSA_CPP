/*
https://codeforces.com/problemset/problem/1256/A
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;
typedef unsigned long long ull;

int main(){
	int q;
    cin >> q;
    while(q--)
    {
        ul a, b, n, S;
        cin >> a >> b >> n >> S;

        if(S % n <= b && (ull) a * n + b >= S) puts("YES");
        else puts("NO");
    }
}


/*
4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18
*/

/*
YES
NO
NO
YES
*/