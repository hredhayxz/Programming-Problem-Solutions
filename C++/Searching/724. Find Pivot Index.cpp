/// Question link: https://leetcode.com/problems/find-pivot-index/


class Solution
{
public:
    int pivotIndex(vector<int>& nums)
    {
        int newSum=0, totalSum = accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<nums.size(); i++)
        {
            totalSum-=nums[i];
            if(totalSum==newSum)
            {
                return i;
            }
            newSum+=nums[i];
        }
        return -1;
    }
};
