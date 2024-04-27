/*
https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
*/

#include <bits/stdc++.h>
using namespace std;

int main(){	
	map<int, multiset<string>> list;

	int n;
	cin >> n;	

	for (int i = 0; i < n; ++i)
	{
		string name;
		int mark;
		cin >> name >> mark;
		list[mark].insert(name);
	}

	auto it = (--list.end());

	while(true)
	{
		for(auto& name: it->second)
		{
			cout << name << " " << it->first << endl;
		}
		if(it == list.begin()) break;
		--it;
	}
}

/*
3
Eve 78
Bob 99
Alice 78
*/

/*
Bob 99
Alice 78
Eve 78
*/