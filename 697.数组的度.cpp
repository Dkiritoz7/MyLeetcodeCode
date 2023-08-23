/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        int length = nums.size();
        int maxCount = 0;
        int minLen = INT_MAX;
        if(length == 1) return 1;
        for(int i = 0; i < length ; i++)
        {
            int tempCount = 0;
            int tempLen = INT_MAX;
            for(int j = i - 1;j >= 0; j--)
            {
                if(nums[j] == nums[i]) 
                {
                    tempCount++;
                    tempLen = i - j + 1 ;
                }
            }
            if(tempCount > maxCount)
            {
                minLen = tempLen;
            }
            if(tempCount == maxCount)
            {
                minLen = min(minLen,tempLen);
            }
            maxCount = max(maxCount,tempCount);
        }
        return minLen;
    }
};
// @lc code=end

