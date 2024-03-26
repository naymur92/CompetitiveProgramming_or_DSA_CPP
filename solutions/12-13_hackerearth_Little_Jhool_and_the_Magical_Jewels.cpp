#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;

		unordered_map<int, int> char_count;

		for(int i = 0; i < s.size(); i++) {
			char_count[(int) s[i]]++;
		}

		string main_s = "ruby";
		int word_count = char_count[main_s[0]];
		for (int i = 1; i < main_s.size(); ++i)
		{
			int count = char_count[(int) main_s[i]];
			if(count < word_count) {
				word_count = count;
			}
		}

		cout << word_count << endl;
		
	}
}