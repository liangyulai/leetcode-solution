/*
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (38.33%)
 * Total Accepted:    394K
 * Total Submissions: 1M
 * Testcase Example:  '121'
 *
 * Determine whether an integer is a palindrome. An integer is a palindrome
 * when it reads the same backward as forward.
 * 
 * Example 1:
 * 
 * 
 * Input: 121
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 * 
 * 
 * Follow up:
 * 
 * Coud you solve it without converting the integer to a string?
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

    bool isPalindrome(int x) {
        return (x >= 0) && (x == reverse(x));
    }
};
