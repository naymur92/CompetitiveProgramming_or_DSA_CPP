#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int count = 0;
	    string J, S;
	    cin >> J >> S;
	    
	    for(int i = 0; i < S.size(); ++i)
	    {
	    	int found = J.find(S[i]);

	        if(found != -1)
	        {
	        	count++;
	        }
	    }
	    cout << count << endl;
	    
	}
	return 0;
}
