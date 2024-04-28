/*
https://www.hackerrank.com/challenges/balanced-brackets/problem
*/

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> keys = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

string isBalanced(string s) {
	stack<char> brackets;
	for(int i = 0; i < s.size(); ++i) {
		char cur = s[i];
		if(keys[cur] < 1) {
			brackets.push(cur);
		} else {
			if(brackets.empty()) {
				return "NO";
			}

			char top = brackets.top();
			if(keys[cur] + keys[top] == 0) {
				brackets.pop();
			} else {
				return "NO";
			}
		}
	}
	if(brackets.empty()) {
		return "YES";
	} else {
		return "NO";
	}
}

int main(){	
	int n;
	cin >> n;
	while(n--)
	{
		string s;
		cin >> s;

		string result = isBalanced(s);
		cout << result << endl;
	}
}

/*
3
{[()]}
{[(])}
{{[[(())]]}}
*/

/*
YES
NO
YES
*/