/*
https://leetcode.com/problems/validate-ip-address/
*/

#include <bits/stdc++.h>

using namespace std;

string validIPAddress(string queryIP) {
    vector<string> parts;

    size_t start = 0, end;

    while ((end = queryIP.find('.', start)) != string::npos) {
        parts.push_back(queryIP.substr(start, end - start));
        start = end + 1;
    }
    // Add last part (even if it's empty)
    parts.push_back(queryIP.substr(start));

    if (parts.size() == 4) {
        // IPv4 checking

        // accept only digit
        for (int i = 0; i < queryIP.size(); ++i) {
            if (isalpha(queryIP[i])) return "Neither";
        }

        for (string &part: parts) {
            if ((part[0] == '0' && part.size() != 1) || part.size() < 1 || part.size() > 3) return "Neither";

            if (stoi(part) > 255) return "Neither";

            cout << stoi(part) << " ";
        }

        return "IPv4";
    } else {
        // validate hexa code
        for (int i = 0; i < queryIP.size(); ++i) {
            if(queryIP[i] >= 'G' and queryIP[i] <= 'Z')
                return "Neither";
            if(queryIP[i] >= 'g' and queryIP[i] <= 'z')
                return "Neither";
        }

        size_t start = 0, end;

        parts.clear();
        while ((end = queryIP.find(':', start)) != string::npos) {
            parts.push_back(queryIP.substr(start, end - start));
            start = end + 1;
        }
        // Add last part (even if it's empty)
        parts.push_back(queryIP.substr(start));

        if (parts.size() == 8) {
            // IPv6 checking
            for (string &part: parts) {
                if (part.size() < 1 || part.size() > 4) return "Neither";
            }

            return "IPv6";
        }
    }

    return "Neither";
}
void solve() {
    string queryIP = "20EE:FGb8:85a3:0:0:8A2E:0370:7334";
    cout << validIPAddress(queryIP);
    cout << "\n";
}

int main() {
    solve();
}