#include <bits/stdc++.h>

using namespace std;


int main(){
	int a[10];
	a[0] = 1;
	a[1] = 5;

	cout << "a: " << a << endl;
	cout << "&a[0]: " << &a[0] << endl;
	cout << "*a: " << *a << endl;

	cout << "a + 1: " << a + 1 << endl;
	cout << "&a[1]: " << &a[1] << endl;
	cout << "*(a +1): " << *(a + 1) << endl;
}