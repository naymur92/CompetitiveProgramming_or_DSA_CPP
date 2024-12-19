/*
https://leetcode.com/problems/asteroid-collision/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
	int n = asteroids.size();

	stack<int> st;
	for (int i = 0; i < n; ++i) {
		if (asteroids[i] > 0) {
			st.push(asteroids[i]);
		} else {
			while (!st.empty() and st.top() > 0 and st.top() < -asteroids[i]) {
				st.pop();
			}

			if (st.empty() or st.top() < 0) {
				st.push(asteroids[i]);
			}

			if (!st.empty() and st.top() == -asteroids[i]) {
				st.pop();
			}
		}
	}

	vector<int> rem_asts(st.size());
	int i = st.size() - 1;
	while (!st.empty()) {
		rem_asts[i--] = st.top();
		st.pop();
	}

	return rem_asts;

}

int main() {
	vector<int> asteroids = {5,10,-5};

	auto result = asteroidCollision(asteroids);
	for (auto& a: result) {
		cout << a << " ";
	}
}