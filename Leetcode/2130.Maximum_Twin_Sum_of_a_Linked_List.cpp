/*
https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75
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

int pairSum(ListNode* head) {
    ListNode* temp = head;
    ListNode* temp1 = head;
    int max_sum = 0;

    while (temp1 and temp1->next) {
        temp = temp->next;
        temp1 = temp1->next->next;
    }

    // reverse the half list
    ListNode* prev = nullptr;
    ListNode* nextNode;
    while (temp) {
        nextNode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextNode;
    }

    while (prev) {
        max_sum = max(max_sum, prev->val + head->val);
        prev = prev->next;
        head = head->next;
    }

    return max_sum;
}

int main() {

}