/*
https://leetcode.com/problems/stock-price-fluctuation/description/  
*/

#include <bits/stdc++.h>

using namespace std;

class StockPrice {
private:
    unordered_map<int, int> mp;
    multiset<int> prices;
    int maxTime = 0;
public:
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if (mp.count(timestamp)) {
            auto it = prices.find(mp[timestamp]);
            prices.erase(it);
        }

        mp[timestamp] = price;
        prices.insert(price);
        maxTime = max(maxTime, timestamp);
    }
    
    int current() {
        return mp[maxTime];
    }
    
    int maximum() {
        return *prices.rbegin();
    }
    
    int minimum() {
        return *prices.begin();
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}