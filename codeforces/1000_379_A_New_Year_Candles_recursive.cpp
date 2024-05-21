/*
https://codeforces.com/problemset/problem/379/A
*/

#include <bits/stdc++.h>

using namespace std;

int countCandle(int candle_part, int ratio){
	if((candle_part/ratio) == 0) return 0;
	
	int rem = candle_part/ratio + candle_part%ratio;

	return (candle_part / ratio) + countCandle(rem, ratio);
}

int main(){
	int a, b;
	cin >> a >> b;

	int hours_count = countCandle(a*b, b);

	cout << hours_count << endl;
}


/*
4 2
*/

/*
7
*/