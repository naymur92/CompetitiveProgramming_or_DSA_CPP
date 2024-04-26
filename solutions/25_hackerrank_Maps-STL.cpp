/*
https://www.hackerrank.com/challenges/cpp-maps/problem
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;

	unordered_map<string, int> marks;

	while(q--)
	{
		int command, mark;
		string name;

		cin >> command >> name;

		if(command == 1) {
			cin >> mark;
			marks[name] += mark;
		} else if(command == 2) {
			marks.erase(name);
		} else if(command == 3) {
			cout << marks[name] << endl;
		}

	}
}

/*
7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
*/

/*
30
20
0
*/