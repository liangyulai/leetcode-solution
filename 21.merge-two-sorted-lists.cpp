/*
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (43.17%)
 * Total Accepted:    410.2K
 * Total Submissions: 950.2K
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 * 
 * Example:
 * 
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr;
        ListNode *curr = nullptr;

        for (; l1 || l2;) {
            if (head == nullptr) {
                head = new ListNode(0);
                curr = head;
            }
            else {
                curr->next = new ListNode(0);
                curr = curr->next;
            }

            if ((l1 && l2 && (l1->val > l2->val)) 
                    || (l1==nullptr && l2)){
                curr->val = l2->val;
                l2 = l2->next;
            }
            else {
                curr->val = l1->val;
                l1 = l1->next;
            }
        }

        return head;
    }
};
