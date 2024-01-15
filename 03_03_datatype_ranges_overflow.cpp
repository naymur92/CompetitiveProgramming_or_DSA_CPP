#include <bits/stdc++.h>

using namespace std;

int main(){
	// int, char, long int, long long int, float, double

	// char 					1byte 		-127 to 127 or 0 to 255
	// unsigned char 			1byte 		0 to 255
	// signed char 				1byte 		-127 to 127
	// int 						4bytes 		-2147483648 to 2147483647
	// unsigned int 			4bytes 		0 to 4294967295
	// signed int 				4bytes 		-2147483648 to 2147483647
	// short int 				2bytes 		-32768 to 32767
	// unsigned short int 		2bytes 		0 to 65,535
	// signed short int 		2bytes 		-32768 to 32767
	// long int 				8bytes 		-9223372036854775808 to 9223372036854775807
	// signed long int 			8bytes 		same as long int
	// unsigned long int 		8bytes 		0 to 18446744073709551615
	// long long int 			8bytes 		-(2^63) to (2^63)-1
	// unsigned long long int 	8bytes 		0 to 18,446,744,073,709,551,615
	// float 					4bytes 	
	// double 					8bytes 	
	// long double 				12bytes 	

	// -10^9 < int < 10^9
	// -10^12 < long int < 10^12
	// -10^18 < long long int < 10^18

	// 	Size of char : 1
	// Size of int : 4
	// Size of short int : 2
	// Size of long int : 4
	// Size of float : 4
	// Size of double : 8
	// Size of wchar_t : 4
	
	// overflow
	int a = 100000;
	int b = 100000;
	int c = a * b;

	cout << c << endl;

	long long d = a * 1LL * b;
	cout << d << endl;

	


	// cout << sizeof (int) << endl;
	// cout << sizeof (long int) << endl;
	// cout << sizeof (long long int) << endl;


	// cout << "Int Min " << numeric_limits<int>::min() << endl;
    // cout << "Int Max " << numeric_limits<int>::max() << endl;

	// cout << "Long Int Min " << numeric_limits<long int>::min() << endl;
    // cout << "Long Int Max " << numeric_limits<long int>::max() << endl;

    // cout << "Long Long Int Min " << numeric_limits<long long int>::min() << endl;
    // cout << "Long Long Int Max " << numeric_limits<long long int>::max() << endl;

	// long long int x = 100000;
	// long long int y = 100000;
	// long long int z = x*y;
	// cout << z << endl;
}