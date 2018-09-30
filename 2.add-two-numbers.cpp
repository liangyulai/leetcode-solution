/*
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (29.14%)
 * Total Accepted:    586.8K
 * Total Submissions: 2M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example:
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* result = head;

        while (l1 || l2) {
            bool carry = false;

            if (l1) {
                head->val += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                head->val += l2->val;
                l2 = l2->next;
            }

            if (head->val >= 10) {
                head->val -= 10;
                carry = true;
            }

            if (l1 || l2 || carry) {
                head->next = new ListNode(carry?1:0);
                head = head->next;
            }
        }
        return result;
    }
};
