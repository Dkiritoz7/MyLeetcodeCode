/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
         const long INF = -2147483649;
        long first,second,third;
        first = second = third = INF;
        for(vector<int>::iterator it = nums.begin();it<nums.end();++it)
        {

            if(*it > first) 
            {
                third = second;
                second = first;
                first = *it;
            }
            if(*it <first && *it > second ) 
            {
                third = second;
                second = *it;
            }
            if(*it <second && *it >third ) third = *it;
        }
        if(third != INF) return third;
        else return first;
    }
};
// @lc code=end


