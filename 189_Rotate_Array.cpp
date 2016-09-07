/**
 * link: https://leetcode.com/problems/rotate-array/
 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k <= 0)
            return;
        
        if(k >= nums.size())
            k = k % nums.size();
            
        vector<int> tmp(nums);
        tmp.insert(tmp.end(), nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = tmp[nums.size()-k+i];
        }
    }
};
