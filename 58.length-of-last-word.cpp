/*
 * [58] Length of Last Word
 *
 * https://leetcode.com/problems/length-of-last-word/description/
 *
 * algorithms
 * Easy (32.07%)
 * Total Accepted:    214.3K
 * Total Submissions: 668.4K
 * Testcase Example:  '"Hello World"'
 *
 * Given a string s consists of upper/lower-case alphabets and empty space
 * characters ' ', return the length of last word in the string.
 * 
 * If the last word does not exist, return 0.
 * 
 * Note: A word is defined as a character sequence consists of non-space
 * characters only.
 * 
 * Example:
 * 
 * Input: "Hello World"
 * Output: 5
 * 
 * 
 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = 0;
        int start = -1;

        if (s.length() == 0) return 0;

        for (int i=s.length()-1; i>=0; --i) {
            if (s[i] != ' ') {
                end = i;
                break;
            }
        }

        for (int i=end; i>=0; --i) {
            if (s[i] == ' ') {
                start = i;
                break;
            }
        }

        return end - start;
    }
};
