/*
https://codeforces.com/problemset/problem/139/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int total_read = 0;

	int pages[7];
	for (int i = 0; i < 7; ++i)
	{
		cin >> pages[i];
	}

	int finishing_day;
	for (int i = 0; total_read < n; i = (i + 1) % 7)
	{
		total_read += pages[i];
		finishing_day = i + 1;
	}
	cout << finishing_day << endl;
}


/*
100
15 20 20 15 10 30 45

*/

/*
6
*/