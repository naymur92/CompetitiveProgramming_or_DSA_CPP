/*
https://codeforces.com/problemset/problem/379/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	int hours_count = 0;
	int went_out_candle = 0;

	while(a > 0)
	{
		hours_count += a;
		went_out_candle += a;
		a = (went_out_candle / b);
		went_out_candle = went_out_candle % b;
	}

	cout << hours_count << endl;
}


/*
4 2
*/

/*
7
*/