#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, green_price, purple_price, perticipants;

	cin >> t;

	while(t--)
	{
		int green_purple, purple_green;
		int first_corr_ans = 0, second_corr_ans = 0;

		cin >> green_price >> purple_price >> perticipants;

		for (int i = 0; i < perticipants; ++i)
		{
			int first_p, second_p;

			cin >> first_p >> second_p;

			if(first_p == 1) {
				first_corr_ans++;
			}
			if(second_p == 1) {
				second_corr_ans++;
			}
		}

		// 1st green, 2nd purple
		green_purple = first_corr_ans * green_price + second_corr_ans * purple_price;

		// 1st purple, 2nd green
		purple_green = first_corr_ans * purple_price + second_corr_ans * green_price;

		if(green_purple <= purple_green) {
			cout << green_purple << endl;
		} else {
			cout << purple_green << endl;
		}

	}

	return 0;
}