/*
https://codeforces.com/problemset/problem/1141/A
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;

int main(){
	ul n, m;
	cin >> n >> m;

	ul div = m / n;
	if(m % n != 0)
    {
		cout << -1 << endl;
    } else
    {
        ul moves = 0;

        while(div % 2 == 0 || div % 3 == 0)
        {
            if(div % 2 == 0)
            {
                moves++;
                div /= 2;
            }
            if(div % 3 == 0)
            {
                moves++;
                div /= 3;
            }
        }
        if(div == 1) cout << moves << endl;
        else cout << -1 << endl;
    }
}


/*
120 51840

*/

/*
7
*/