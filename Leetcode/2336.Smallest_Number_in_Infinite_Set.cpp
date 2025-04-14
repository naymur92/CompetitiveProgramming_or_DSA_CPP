/*
https://leetcode.com/problems/smallest-number-in-infinite-set/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

class SmallestInfiniteSet {
public:
	int curr;
	set<int> st;
    SmallestInfiniteSet() {
        curr = 1;
    }
    
    int popSmallest() {
        if (!st.empty()) {
        	int tmp = *st.begin();
        	st.erase(tmp);

        	return tmp;
        } else {
        	curr++;
        	return curr - 1;
        }
    }
    
    void addBack(int num) {
        if (curr > num) st.insert(num);
    }
};


int main() {
	
}