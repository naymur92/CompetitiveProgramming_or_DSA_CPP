#include <bits/stdc++.h>

using namespace std;

// const int N = 1e5 + 10; // for one dimentional array
const int N = 1e3 + 10;	// for to dimentional array
int a[N][N];

void func()
{
	a[0][0] = 6;
}

int main(){
	a[0][0] = 4;

	cout << a[0][0] << endl;

	func();

	cout << a[0][0] << endl;

}