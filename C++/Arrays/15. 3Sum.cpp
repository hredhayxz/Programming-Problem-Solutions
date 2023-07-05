/// Ques link: https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int K=0;
        int n = nums.size();
        set<vector<int>> mySet;
        sort(nums.begin(), nums.end());

        for (int high = n - 1; high >= 2; high--)
        {
            int low = 0, mid = high - 1;
            while (low < mid)
            {
                int sum = nums[low] + nums[mid] + nums[high];
                if (sum == K)
                {
                    mySet.insert({nums[low], nums[mid], nums[high]});
                    low++;
                    mid--;
                }
                else
                {
                    if (sum < K)
                    {
                        low++;
                    }
                    else
                    {
                        mid--;
                    }
                }
            }
        }
        vector<vector<int>> result(mySet.begin(), mySet.end());
        return result;
    }

};
