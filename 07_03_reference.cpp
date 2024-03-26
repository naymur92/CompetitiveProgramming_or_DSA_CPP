#include <bits/stdc++.h>

using namespace std;

void increment(int &a, int b)
{
	a = 5;
	b = 7;
}

int main(){
	int m, n;
	cin >> m >> n;

	cout << m << ' ' << n << endl;

	increment(m, n);

	cout << m << ' ' << n << endl;

}