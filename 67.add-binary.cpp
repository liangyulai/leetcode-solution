/*
 * [67] Add Binary
 *
 * https://leetcode.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (35.76%)
 * Total Accepted:    233.2K
 * Total Submissions: 651.7K
 * Testcase Example:  '"11"\n"1"'
 *
 * Given two binary strings, return their sum (also a binary string).
 * 
 * The input strings are both non-empty and contains only characters 1 or 0.
 * 
 * Example 1:
 * 
 * 
 * Input: a = "11", b = "1"
 * Output: "100"
 * 
 * Example 2:
 * 
 * 
 * Input: a = "1010", b = "1011"
 * Output: "10101"
 * 
 */
class Solution {
public:
    int binary2int(string b) {
        int n = 0;
        for (auto it=b.begin(); it!=b.end(); it++) {
            if (*it == '1') {
                n = n*2 +1;
            }
            else {
                n = n*2;
            }
        }

        return n;
    }

    string addBinary(string a, string b) {
        auto ita = a.rbegin();
        auto itb = b.rbegin();
        bool carry = false;
        string output = "";
        string result = "";

        for (; ita != a.rend() || itb != b.rend(); ) {
            if (*ita == '1' && *itb == '1') {
                if (carry) {
                    result.insert(0, "1");
                }
                else {
                    result.insert(0, "0");
                }
                carry = true;
            }
            else if ((*ita == '0' && *itb == '0') 
            || (*ita == '0' && itb == b.rend())
            || (*itb == '0' && ita == a.rend()))
            {
                if (carry) {
                    result.insert(0, "1");
                }
                else {
                    result.insert(0, "0");
                }
                carry = false;
            }
            else {
                // a = 0, b=1
                // a = 1, b=0
                // a = 1, b=null
                // a = null, b=1
                if (carry) {
                    result.insert(0, "0");
                    carry = true;
                }
                else {
                    result.insert(0, "1");
                    carry = false;
                }
            }

            if (ita != a.rend()) ita++;
            if (itb != b.rend()) itb++;
        };

        if (carry) {
            result.insert(0, "1");
        }

        return result;
    }
};
