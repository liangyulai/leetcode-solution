/*
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (31.92%)
 * Total Accepted:    324.5K
 * Total Submissions: 1M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        int shortest = strs[0].length();

       // get the shortest string length
       for (auto it:strs) {
           if (shortest > it.length()) {
               shortest = it.length();
           }
       }

       // 
       int len = 0;
       bool diff = false;
       for (; len<=shortest; ++len) {
           if (diff) {
               break;
           }

           for (auto it:strs) {
               if (strs[0][len] != it[len]) {
                   diff = true;
                   break;
               }
           }
       }

       if (len>1){
           return strs[0].substr(0, len-1);
       }
       else {
           return "";
       }
    }
};
