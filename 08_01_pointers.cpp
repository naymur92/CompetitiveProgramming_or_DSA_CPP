#include <bits/stdc++.h>

using namespace std;


int main(){
	int a = 4;
	int *p_a = &a;

	cout << "Addr a: " << &a << endl;
	cout << "Val p_a: " << p_a << endl;
	cout << "Addr p_a: " << &p_a << endl;
	cout << "Val *p_a: " << *p_a << endl;

	*p_a = 7;

	cout << "Val a: " << a << endl;
	cout << "Val *p_a: " << *p_a << endl;
	cout << "Val p_a + 1: " << p_a + 1 << endl;

	int **p_p_a = &p_a;
	cout << "Addr p_a: " << &p_a << endl;
	cout << "Val p_p_a: " << p_p_a << endl;
	cout << "Val *p_p_a: " << *p_p_a << endl;

	**p_p_a = 9;
	cout << "Val a: " << a << endl;
}