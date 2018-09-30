/*
 * [70] Climbing Stairs
 *
 * https://leetcode.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (42.05%)
 * Total Accepted:    293.2K
 * Total Submissions: 697.1K
 * Testcase Example:  '2'
 *
 * You are climbing a stair case. It takes n steps to reach to the top.
 * 
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can
 * you climb to the top?
 * 
 * Note: Given n will be a positive integer.
 * 
 * Example 1:
 * 
 * 
 * Input: 2
 * Output: 2
 * Explanation: There are two ways to climb to the top.
 * 1. 1 step + 1 step
 * 2. 2 steps
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 3
 * Output: 3
 * Explanation: There are three ways to climb to the top.
 * 1. 1 step + 1 step + 1 step
 * 2. 1 step + 2 steps
 * 3. 2 steps + 1 step
 * 
 * 
 */
class Solution {
public:
    int climbStairs(int n) {
        // n=2, 11, 2
        // n=3, 111, 12, 21,
        // n=4, 1111, 112, 121, 211, 22
        // n=5, 11111, 1112, 1121, 1211, 122, 2111, 212, 221
        // n=6, 111111, 11112, 11121, 11211, 12111, 21111, 1122, 1212, 1221, 2112, 2211, 2121, 222

        int a = 0, b=1;
        int result = 0;

        for (int i=1; i<=n; i++) {
            result = a + b;
            a = b;
            b = result;
        }

        return result;

        // if (n == 1) {
        //     return 1;
        // }
        // else if (n == 2) {
        //     return 2;
        // }
        // else {
        //     return climbStairs(n-1) + climbStairs(n-2);
        // }
    }
};
