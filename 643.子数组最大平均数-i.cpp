/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int tempSum = 0;
        int length = nums.size();
        for(int i = 0;i<k;i++)
        {
            tempSum += nums[i];
        }
        int maxSum = tempSum;
        for(int i = k;i<length;i++)
        {
            tempSum = tempSum - nums[i - k] + nums[i];
            maxSum = max(maxSum,tempSum);
        }
        return maxSum*1.0/k;
 
    }
};
// @lc code=end