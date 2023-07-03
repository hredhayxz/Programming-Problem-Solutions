/// Ques link: https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution
{
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        unordered_map<int, int> mp;

        for (int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        vector<int> duplicates;
        for (auto& it:mp)
        {
            if (it.second==2)
            {
                duplicates.push_back(it.first);
            }
        }

        return duplicates;
    }
};

