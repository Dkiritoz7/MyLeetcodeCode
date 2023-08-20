/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int minNumber,minSecNumber;
        int maxNumber1,maxNumber2,maxNumber3;
        for(int x:nums)
        {
            if(x<minNumber) 
            {
                minSecNumber = minNumber;
                x = minNumber;
            }
            else if(x<minSecNumber)
            {
                minSecNumber = x;
            }
            if(x > maxNumber1)
            {
                maxNumber3 = maxNumber2;
                maxNumber2 = maxNumber1;
                maxNumber1 = x;
            }
            else if(x > maxNumber2)
            {
                maxNumber3 =maxNumber2;
                maxNumber2 = x;
            }
            else if(x > maxNumber3)
            {
                maxNumber3 = x;
            }
        }
        return max(maxNumber1 * maxNumber2 * maxNumber3,maxNumber1 * minNumber * minSecNumber);
    }
};
// @lc code=end