#include <bits/stdc++.h>
using namespace std;

void merge( int random_integers[], int const st, int const mid, int const en) {
    int nl = mid - st + 1;  // left array size
    int nr = en - mid;  // right array size

    int L[nl];  // left array
    int R[nr];  // right array

    for(int i = 0; i < nl; ++i) {
        L[i] = random_integers[st + i];
    }
    for(int i = 0; i < nr; ++i) {
        R[i] = random_integers[mid + i + 1];
    }

    int j = 0;  // for L array
    int k = 0;  // for R array
    int p = st;

    while(j < nl && k < nr) {
        if(L[j] <= R[k]) {
            random_integers[p] = L[j++];
        } else {
            random_integers[p] = R[k++];
        }
        p++;
    }

    while(j < nl) {
        random_integers[p++] = L[j++];
    }

    while(k < nr) {
        random_integers[p++] = R[k++];
    }

}

void merge_sort(int random_integers[], int const st, int const en) {
    if(st >= en) {
        return;
    }

    int mid = (st + en) / 2;
    merge_sort(random_integers, st, mid);
    merge_sort(random_integers, mid + 1, en);

    merge(random_integers, st, mid, en);
}

int main() {
    int size = 100000;
    int max_value = 999999;

    // Generate the array of random integers
    int random_integers[size];
    for (int i = 0; i < size; ++i) {
        random_integers[i] = rand() % (max_value + 1); // Generates random numbers between 0 and max_value
    }


    merge_sort(random_integers, 0, size - 1);

    for(int i = 0; i < size; ++i) {
        cout << random_integers[i] << endl;
    }

    return 0;
}