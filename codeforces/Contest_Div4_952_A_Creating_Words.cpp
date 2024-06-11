/*
https://codeforces.com/contest/1985/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        char first_a = a[0];
        char first_b = b[0];

        a[0] = first_b;
        b[0] = first_a;

        cout << a << " " << b << endl;
    }
}


/*
6
bit set
cat dog
hot dog
uwu owo
cat cat
zzz zzz

*/

/*
sit bet
dat cog
dot hog
owu uwo
cat cat
zzz zzz

*/