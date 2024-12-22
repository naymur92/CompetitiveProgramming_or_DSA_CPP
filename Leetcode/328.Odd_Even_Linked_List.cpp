/*
https://leetcode.com/problems/odd-even-linked-list/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* oddEvenList(ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;
    
    vector<int> odds;
    auto temp = head;
    auto curr = head;
    while (temp != nullptr) {
        curr->val = temp->val;
        curr = curr->next;

        temp = temp->next;
        if (temp != nullptr) {
            odds.push_back(temp->val);
            temp = temp->next;
        }
        
    }
    for (int val: odds) {
        curr->val = val;
        curr = curr->next;
    }

    return head;
}

int main() {

}