/// Ques link: https://leetcode.com/problems/contains-duplicate/


class Solution
{
public:
    bool containsDuplicate(vector<int>& nums)
    {
        unordered_set<int> unSet;
        for(auto it:nums)
        {
            if(unSet.count(it)>0)
            {
                return true;
            }
            unSet.insert(it);
        }
        return false;
    }
};
