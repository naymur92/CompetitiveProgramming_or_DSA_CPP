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
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        default:
            cerr << "Error: Invalid operator" << endl;
            return 0;
    }
}


int evaluatePrefix(vector<string> &parts) {
	stack<int> nums;

    // Tokenize the input
    for (int i = parts.size() - 1; i >= 0; --i) {
        // Check if the item is a number
        if (isNumber(parts[i]))
            nums.push(stoi(parts[i]));
        else if (isOperator(parts[i])) {
            if (nums.size() < 2) {
                cerr << "Error: Invalid expression" << endl;
                return 0;
            }
            int op1 = nums.top();
            nums.pop();
            int op2 = nums.top();
            nums.pop();

            int res = performOperation(op1, op2, parts[i][0]);
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

    string token;
    vector<string> parts;
    while (ss >> token) {
        parts.push_back(token);
    }

	cout << "Result: " << evaluatePrefix(parts) << endl;
}

/*
- + * 2 3 * 5 4 9
*/

/*
17
*/