/*
https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew
*/

#include <bits/stdc++.h>
using namespace std;

int main(){	
	int t;
	cin >> t;
	while(t--)
	{
		set<string> invite_list;

		int n;
		cin >> n;	

		for (int i = 0; i < n; ++i)
		{
			string name;
			cin >> name;
			invite_list.insert(name);
		}
		for(auto& name: invite_list)
		{
			cout << name << endl;
		}

	}
}

/*
1
7
chandu
paro
rahul
mohi
paro
arindam
rahul
*/

/*
arindam
chandu
mohi
paro
rahul
*/