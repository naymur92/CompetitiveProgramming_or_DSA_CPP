#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {2, 3, 5};

	cout << none_of(v.begin(), v.end(), [](int x){return x > 3;}) << "\n";
	cout << none_of(v.begin(), v.end(), [](int x){return x > 5;}) << "\n";
}

/*

*/