#include <bits/stdc++.h>
using namespace std;

int main() {
	int size = 500;
    int max_value = 32000;

    // Generate the array of random integers
    int random_integers[size];
    for (int i = 0; i < size; ++i) {
        random_integers[i] = rand() % (max_value + 1); // Generates random numbers between 0 and max_value
    }


    // start sorting programm
    for(int i = 1; i < size; ++i) {
    	int key = random_integers[i];

    	int j = i - 1;
    	while(j >= 0 && random_integers[j] > key) {
    		random_integers[j + 1] = random_integers[j];
    		j = j - 1;
    	}
    	random_integers[j + 1] = key;
    }
    // end sorting programm


    for(int i = 0; i < size; ++i) {
    	cout << random_integers[i] << endl;
    }

	return 0;
}