#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;
	cin >> t;

	while(t--)
	{
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				printf("*");
			}
			
			for (int k = 0; k < 2 * (n - i - 1); ++k)
			{
				printf("#");
			}

			for (int l = 0; l <= i; ++l)
			{
				printf("*");
			}
			printf("\n");
		}

		printf("\n");
	}

}
