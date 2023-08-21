#include <bits/stdc++.h>

using namespace std;

// void headerFooter(int n) {
// 	for(int i = 2 * n - 1; i >= 1; --i) {
// 		printf("%d", n);
// 	}
// 	printf("\n");
// }

// // void headerFooter(int n) {
// // 	for(int i = 2 * n - 1; i >= 1; --i) {
// // 		printf("%d", n);
// // 	}
// // 	printf("\n");
// // }


// void drawPattern(int n) {
// 	if(n == 1) {
// 		// printf("%d", n);
// 		return;
// 	}

// 	// headerFooter(n);

// 	printf("%d", n);
// 	for(int i = 1; i <= n; ++i) {
// 		printf("%d", n - 1);
// 	}	
// 	printf("%d", n);	
// 	printf("\n");

// 	// headerFooter(n);

// 	drawPattern(n - 1);
// }

int main(){
	int n;
	cin >> n;

	// 1st half
	for (int i = 0; i < 2 * n - 1; ++i)
	{
		if(i == 0 || i == 2 * n - 2){
			for (int j = 0; j < 2 * n - 1; ++j)
			{
				printf("%d", n);
			}
		} else{
			for (int k = 0; k <= i; ++k)
			{
				printf("%d", (n - k));
			}
			for (int l = 0; l < n - i; ++l)
			{
				printf("%d", n - i);
			}
			for (int m = 0; m < 2 * n - 1; ++m)
			{
				printf("%d", n);
			}
		}
		
		printf("\n");
		// for (int k = 1; k < n; ++k)
		// {
		// 	printf("%d", n);
		// }
		// printf("\n");
	}
}
