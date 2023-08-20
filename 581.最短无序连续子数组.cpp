/*
 * @lc app=leetcode.cn id=581 lang=cpp
 *
 * [581] 最短无序连续子数组
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int length = nums.size();
        if(length==1) return 0;
        if(length==2&&nums[1]<nums[0]) return 2;
        int start,last;
        start = last = -1;
        int minNum = nums[length-1];
        int maxNum = nums[0];
        for(int i  = 1;i<length;i++)
        {
            if(maxNum > nums[i]) last = i;
            maxNum = max(maxNum,nums[i]);
            if(minNum < nums[length-i-1]) start = length-i-1;
            minNum = min(minNum,nums[length-i-1]);
        }
        if(last == start) return 0;
        else return (last-start+1);
    }
};
// @lc code=end

