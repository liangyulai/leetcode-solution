/*
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (24.43%)
 * Total Accepted:    479.7K
 * Total Submissions: 2M
 * Testcase Example:  '123'
 *
 * Given a 32-bit signed integer, reverse digits of an integer.
 * 
 * Example 1:
 * 
 * 
 * Input: 123
 * Output: 321
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: -123
 * Output: -321
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: 120
 * Output: 21
 * 
 * 
 * Note:
 * Assume we are dealing with an environment which could only store integers
 * within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of
 * this problem, assume that your function returns 0 when the reversed integer
 * overflows.
 * 
 */
class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        long temp = x;
        while (temp) {
            rev = rev * 10;
            rev += temp % 10;
            temp = temp / 10;
        }

        if ((rev > 2147483647) || (rev < -2147483648)) {
            return 0;
        }
        else {
            return int(rev);
        }
    }
};
