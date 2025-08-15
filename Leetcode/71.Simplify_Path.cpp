/*
https://leetcode.com/problems/simplify-path/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();

        stack<string> paths;

        string tmp = "";
        for (int i = 0; i < n; ++i) {
            if (path[i] == '/') {
                if (tmp == "..") {
                    if (!paths.empty()) {
                        paths.pop();
                    }
                } else if (tmp != "." && tmp != "") {
                    paths.push(tmp);
                }
                tmp = "";
            } else {
                tmp += path[i];
            }
        }
        if (tmp == "..") {
            if (!paths.empty()) {
                paths.pop();
            }
            tmp = "";
        }
        if (tmp != "" && tmp != ".") paths.push(tmp);

        string ans = "";
        while (!paths.empty()) {
            ans = "/" + paths.top() + ans;
            paths.pop();
        }

        return ans == "" ? "/" : ans;
    }
};

int main() {
	Solution obj;
    cout << obj.simplifyPath("/../");
}