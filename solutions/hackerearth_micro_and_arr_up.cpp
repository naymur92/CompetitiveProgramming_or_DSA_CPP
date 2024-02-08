#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, k, diff = 0;
		scanf("%d %d", &n, &k);;

		int number;

		// bool solved = true;		

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &number);;

			if(diff < k - number) {
				diff = k - number;
			}
			
		}

		printf("%d\n", diff);
	}

	// return 0;
}