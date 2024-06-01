#include<iostream>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false; 
        }

        ListNode *slowPtr = head;
        ListNode *fastPtr = head;

        while(slowPtr != NULL && fastPtr != NULL && fastPtr->next != NULL)
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;

            if(slowPtr == fastPtr) {
                return true;
            }
        }
        return false;
    }
};
