#include <bits/stdc++.h>

using namespace std;

bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool isOperator(const string& token) {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}

int performOperation(int op1, int op2, char oper) {
    switch (oper) {
        case '+': return op1 + op2;
        case '-': return op2 - op1;
        case '*': return op1 * op2;
        case '/': return op2 / op1;
        default:
            cerr << "Error: Invalid operator" << endl;
            return 0;
    }
}


int evaluatePostfix(stringstream &exp) {
	stack<int> nums;

	string token;

    // Tokenize the input
    while (exp >> token) {
        // Check if the token is a number
        if (isNumber(token))
        	nums.push(stoi(token));
        else if (isOperator(token)) {
        	if (nums.size() < 2) {
                cerr << "Error: Invalid expression" << endl;
                return 0;
            }
        	int op1 = nums.top();
        	nums.pop();
        	int op2 = nums.top();
        	nums.pop();

        	int res = performOperation(op1, op2, token[0]);
        	nums.push(res);
        }
    }

	if (nums.size() != 1) {
        cerr << "Error: Invalid expression" << endl;
        return 0;
    }

    return nums.top();
}

int main() {
	string exp;
	getline(cin, exp);

	stringstream ss(exp);

	cout << "Result: " << evaluatePostfix(ss) << endl;
}

/*
2 3 * 5 4 * + 9 -
*/

/*
17
*/