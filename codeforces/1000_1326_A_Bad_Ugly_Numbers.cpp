/*
https://codeforces.com/problemset/problem/1326/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	// print top half
	for (int i = n; i >= -n; --i)
	{
		int new_i = abs(i);

		// print left spaces
		int inner_loop = new_i;
		while(inner_loop--)
		{
			cout << "  ";
		}

		// print left numbers
		for (int j = 0; j <= n - new_i; ++j)
		{
			cout << j;
			if(j < n - new_i) cout << " ";
		}

		// print right numbers
		for (int j = n - new_i - 1; j >= 0; --j)
		{
			cout << " " << j;
		}
		cout << endl;
	}
}


/*
2
*/

/*
    0
  0 1 0
0 1 2 1 0
  0 1 0
    0

*/