/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 #include<iostream>
 using namespace std;
class Solution {
public:
int getLength(ListNode* head){
        ListNode* temp = head;
        int len = 1;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int l1 = getLength(temp1);
        int l2 = getLength(temp2);
        int diff = abs(l1-l2);

        if(l1 > l2){
            while(diff > 0){
                temp1 = temp1->next;
                diff--;
            }
        }
        else{
            while(diff > 0){
                temp2 = temp2->next;
                diff--;
            }
        }

        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return NULL;
    }
};
