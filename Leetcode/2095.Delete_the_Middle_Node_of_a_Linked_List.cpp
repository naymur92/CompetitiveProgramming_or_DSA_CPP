/*
https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75
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

ListNode* deleteMiddle(ListNode* head) {
    if (head == NULL || head->next == NULL)
        return NULL;

    int n = 0;
    auto temp = head;
    while (temp != nullptr) {
        n++;
        temp = temp->next;
    }
    n /= 2;

    auto curr = head;
    for (int i = 0; i < n - 1; i++) {
        curr = curr->next;
    }

    auto temp1 = curr->next;
    curr->next = temp1->next;

    delete temp1;

    return head;
}

int main() {

}