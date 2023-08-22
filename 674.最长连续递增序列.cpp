/*
 * @lc app=leetcode.cn id=674 lang=cpp
 *
 * [674] 最长连续递增序列
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int length = nums.size();
        int count2 = 1;
        int finaResult = 1;
        if(length == 1) return 1;
        for(int i = 1;i<length;i++)
        {
            int tempNum = nums[i - 1];
            if(tempNum >= nums[i])
            {
                count2 = finaResult;
                finaResult = 0;
                finaResult++;
            }
            else 
            {
                finaResult++;
            }
            finaResult = max(finaResult,count2);
        }
        return finaResult;
    }
};
// @lc code=end

