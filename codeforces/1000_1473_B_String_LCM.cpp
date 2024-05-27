/*
https://codeforces.com/problemset/problem/1473/B
*/

#include <bits/stdc++.h>

using namespace std;

string generateString(string S, int times){
	string new_s = "";
	while(times--)
	{
		new_s += S;
	}
	return new_s;
}

int main(){
	int q;
	cin >> q;
	while(q--)
	{
		string s, t;
		cin >> s >> t;

		int s_s = s.size();
		int t_s = t.size();

		int lcm = (s_s * t_s) / __gcd(s_s, t_s);
		
		if(generateString(s, lcm / s_s) != generateString(t, lcm / t_s)) cout << -1 << endl;
		else cout << generateString(s, lcm / s_s) << endl;
	}
}


/*
3
baba
ba
aa
aaa
aba
ab

*/

/*
baba
aaaaaa
-1
*/