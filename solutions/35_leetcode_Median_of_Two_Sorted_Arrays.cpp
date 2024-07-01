/*
https://leetcode.com/problems/median-of-two-sorted-arrays
*/

#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {\
    vector<int> merged(nums1.size() + nums2.size());
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());

    sort(merged.begin(), merged.end());

    int size = merged.size();
    double mid = 0;
    if(size % 2 == 0){
        mid = (merged[size/2 - 1] + merged[size/2]) / 2.0;
    } else
    {
        mid = merged[(size + 1) / 2 - 1];
    }
    return mid;
}

int main(){	
	int t;
	cin >> t;

	while(t--)
	{
		int size1, size2;
		cin >> size1 >> size2;

		vector<int>nums1(size1);
		vector<int>nums2(size2);

		for (int i = 0; i < size1; ++i)
		{
			cin >> nums1[i];
		}
		for (int i = 0; i < size2; ++i)
		{
			cin >> nums2[i];
		}

		cout << findMedianSortedArrays(nums1, nums2) << endl;
	}
}

/*
2
2 1
1 3
2
2 2
1 2
3 4
*/

/*
2.000
2.500
*/