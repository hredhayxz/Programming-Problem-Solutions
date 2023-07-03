/// Ques link: https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> my_map;
        vector<int> duplicates;

        for (int i = 0; i < nums.size(); i++)
        {
            if (my_map[nums[i]] == 0)
            {
                my_map[nums[i]] = 1;
            }
            else
            {
                duplicates.push_back(nums[i]);
            }
        }

        return duplicates;
    }
};
