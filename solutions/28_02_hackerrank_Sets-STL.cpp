/*
https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<int> numbers;
	
	int q;
	cin >> q;
	while(q--)
	{
		int y, x;
		cin >> y >> x;

		if(y == 1) {
			numbers.insert(x);
		} else if(y == 2) {
			numbers.erase(x);
		} else if(y == 3) {
			auto it = numbers.find(x);
			if(it != numbers.end()) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
		
	}
}

/*
8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
*/

/*
Yes
No
No
*/