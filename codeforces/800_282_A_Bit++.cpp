/*
https://codeforces.com/problemset/problem/282/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n;
	cin >> n;

	int X = 0;
	while(n--)
	{
		string c; 
		cin >> c;
		if(c == "X++" || c == "++X") X++;
		else X--;
	}
	cout << X << endl;
}

/*
2
X++
--X


*/

/*
0

*/