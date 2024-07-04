#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {2, 3, 5};

	cout << all_of(v.begin(), v.end(), [](int x){return x > 0;}) << "\n";
	cout << all_of(v.begin(), v.end(), [](int x){return x > 2;}) << "\n";
}

/*

*/