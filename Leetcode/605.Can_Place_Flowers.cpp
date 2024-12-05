/*
https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
	int s = flowerbed.size();
	if (s == 1) {
		if (flowerbed[0] == 0 and n) n--;
	} else {
		for (int i = 0; i < s and n; ++i)
		{
			bool cond = flowerbed[i] == 0;
			if (i == 0) {
				cond = cond and flowerbed[i + 1] == 0;
			} else if (i == s - 1) {
				cond = cond and flowerbed[i - 1] == 0;
			} else {
				cond = cond and flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0;
			}

			if (cond) {
				flowerbed[i] = 1;
				n--;
			}
		}
	}
	
	return n == 0;
}

int main() {
	vector<int> flowerbed = {1,0,0,0,1};
	int n = 1;

	cout << boolalpha << canPlaceFlowers(flowerbed, n);
}


/*
1,0,0,0,1
1

*/

/*
true
*/