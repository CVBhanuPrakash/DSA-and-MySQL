/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            size++;
            temp = temp->next;
        }
        ListNode* curr = head;
        int n = (size/2)+1;
        for(int i=1; i<n; i++){
            curr = curr->next;
        }
        return curr;
    }
};