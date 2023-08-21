/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    {
        int length = nums.size();
        if(length<=2) return true;
        int count = 0;
        if(nums[1] < nums[0])
        {
            nums[0] = nums[1];
            count++;
        }
        for(int i = 0 ;i< length - 1;i++)
        {
            int tempNum = nums[i + 1];
            if(tempNum < nums[i] && nums[i] > nums[i + 2] && i+2 <= length - 1)
            {
                nums[i] = nums[i + 1];
                count++;
                if(nums[i] < nums[i - 1]) return false;
            }
            if(tempNum < nums[i] && nums[i] <= nums[i + 2] && i+2 <= length -1)
            {
                nums[i + 1] = nums[i];
                count++ ;
            }
        }
        if(nums[length - 1] < nums[length -2])
        {
            nums[length - 1] = nums[length - 2];
            count++;
        }
        if(count>=2) return false;
        else return true;
    }
};
// @lc code=end
