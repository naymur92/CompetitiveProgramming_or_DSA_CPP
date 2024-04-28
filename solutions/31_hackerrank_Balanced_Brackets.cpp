/*
https://www.hackerrank.com/challenges/balanced-brackets/problem
*/

#include <bits/stdc++.h>
using namespace std;

int main(){	
	int n;
	cin >> n;
	while(n--)
	{
		string s;
		cin >> s;

		stack<char> brackets;

		for (int i = 0; i < s.size(); ++i)
		{
			char bracket = s[i];			
			if(bracket == '(' || bracket == '{' || bracket == '[') {
				brackets.push(bracket);
			} else {
				if(brackets.empty()) {
		            return "NO";
		        }
				char opening = brackets.top();
				if((opening == '(' && bracket == ')') || (opening == '{' && bracket == '}') || (opening == '[' && bracket == ']')) {
					brackets.pop();
				} else {
					break;
				}
			}
		}
		if(brackets.empty()) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
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