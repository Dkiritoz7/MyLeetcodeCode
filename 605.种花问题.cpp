/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int canNum = 0;
        int length = flowerbed.size();
        int *myNewFlowerbed = new int[length+2];
        myNewFlowerbed[0] = 0;
        for(int i = 1;i<=length;i++)
        {
            myNewFlowerbed[i] = flowerbed[i-1];
        }
        myNewFlowerbed[length+1] = 0;
        for(int i = 0;i< length;i++)
        {
            if(myNewFlowerbed[i] == 0 && myNewFlowerbed[i+1] == 0&&myNewFlowerbed[i+2] == 0)
            {
                canNum++;
                myNewFlowerbed[i+1] = 1;
            }
        }
        if(canNum == n) return true;
        else return false;
    }
};
// @lc code=end

