#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int width = 2 * n - 1;
	int half_width = n - 1;
	int half_height = n - 1;

	// 1st half
	for (int i = 0; i < n; ++i)
	{
		for (int k = 0; k <= i; ++k)
		{
			printf("%d ", (n - k));
		}
		for (int l = i + 1; l < width - i - 1; ++l)
		{
			printf("%d ", n - i);
		}
		
		// print center row for end value of loop variable
		if(i == n - 1)
		{
			for (int m = i; m > 0; --m)
			{
				printf("%d ", (n - m + 1));
			}
			printf("\n");
			continue;
		}

		for (int m = i; m >= 0; --m)
		{
			printf("%d ", (n - m));
		}
	
		printf("\n");
	}


	// last half
	for (int i = half_height - 1; i >= 0; --i)
	{
		for (int k = 0; k <= i; ++k)
		{
			printf("%d ", (n - k));
		}
		for (int l = i + 1; l < width - i - 1; ++l)
		{
			printf("%d ", n - i);
		}
		for (int m = i; m >= 0; --m)
		{
			printf("%d ", (n - m));
		}
	
		printf("\n");
	}

}
