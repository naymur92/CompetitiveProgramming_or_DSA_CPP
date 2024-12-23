/*
https://leetcode.com/problems/reverse-linked-list/description/?envType=study-plan-v2&envId=leetcode-75
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

// using stack
ListNode* reverseList(ListNode* head) {
    if (head == NULL) return head;

    stack<ListNode*> s;
    auto temp = head;
    while (temp != nullptr) {
        s.push(temp);
        temp = temp->next;
    }

    ListNode* temp1 = s.top();
    head = temp1;
    s.pop();

    while (!s.empty()) {
        temp1->next = s.top();
        s.pop();
        temp1 = temp1->next;
    }
    temp1->next = nullptr;

    return head;
}

// using iterator
/*ListNode* reverseList(ListNode* head) {
    ListNode *prev = nullptr, *next;

    while (head) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    return prev;
}*/

int main() {

}