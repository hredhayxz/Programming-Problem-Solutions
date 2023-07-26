/// Ques link: https://leetcode.com/problems/move-zeroes/



class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int nonZeroPtr = 0;

        for (int currentPtr = 0; currentPtr < nums.size(); currentPtr++)
        {
            if (nums[currentPtr] != 0)
            {
                swap(nums[nonZeroPtr], nums[currentPtr]);
                nonZeroPtr++;
            }
        }
    }
};
