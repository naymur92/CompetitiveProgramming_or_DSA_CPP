#include <bits/stdc++.h>
using namespace std;

int main(){
	auto sum = [](int x, int y){return x + y;};

	cout << sum(3, 5) << "\n";

	cout << [](int x, int y){return x + y;}(5, 75);
}

/*

*/