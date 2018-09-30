/*
 * [38] Count and Say
 *
 * https://leetcode.com/problems/count-and-say/description/
 *
 * algorithms
 * Easy (37.87%)
 * Total Accepted:    221.6K
 * Total Submissions: 584.9K
 * Testcase Example:  '1'
 *
 * The count-and-say sequence is the sequence of integers with the first five
 * terms as following:
 * 
 * 
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 * 
 * 
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 * 
 * Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the
 * count-and-say sequence.
 * 
 * Note: Each term of the sequence of integers will be represented as a
 * string.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: 1
 * Output: "1"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 4
 * Output: "1211"
 * 
 */
class Solution {
public:
    string countAndSay(int n) {
        string s = "";
        if (n > 1) {
            string temp = countAndSay(n-1);
            char t = temp[0];
            int count = 0;
            for (char c:temp) {
                if (c == t) {
                    count++;
                    continue;
                }
                s.append(to_string(count));
                s.push_back(t);
                count = 1;
                t = c;
            }
            s.append(to_string(count));
            s.push_back(t);
        }
        else {
            s = "1";
        }

        return s;
    }
};
