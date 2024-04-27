#include <bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;

	q.push(5);
	q.push(2);
	q.push(1);
	q.push(4);

	while(!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
}