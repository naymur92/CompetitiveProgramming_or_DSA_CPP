#include <bits/stdc++.h>
using namespace std;

int main(){
	pair<int, string> p;
	p = make_pair(2, "Naymur");
	cout << p.first << " => " << p.second << endl;

	pair<int, string> p1;
	p1 = {3, "Mita"};
	cout << p1.first << " => " << p1.second << endl;

	pair<int, pair<int, string>> nested_p;
	nested_p = {3, {4, "Nested Element"}};
	cout << nested_p.first << " => {" << nested_p.second.first << " => " << nested_p.second.second << "}" << endl;

	// copy element
	pair<int, string> p2 = p;
	p.second = "Naymur Rahman";
	cout << p.first << " => " << p.second << endl;
	cout << p2.first << " => " << p2.second << endl;


	// copy element with reference
	pair<int, string> &p3 = p;
	p.second = "Kamrul Hasan";
	cout << p.first << " => " << p.second << endl;
	cout << p3.first << " => " << p3.second << endl;

	// pair is used for maintain relationship
	pair<int, int> arr[3];
	arr[0] = {1, 2};
	arr[1] = {2, 3};
	arr[2] = {3, 4};
}