///Ques link: https://leetcode.com/problems/two-sum/


///two-pointer approach


class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> numToIndex;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];

            if (numToIndex.find(complement) != numToIndex.end())
            {
                result.push_back(numToIndex[complement]);
                result.push_back(i);
                break;
            }

            numToIndex[nums[i]] = i;
        }

        return result;
    }
};




/*

///Bruteforce approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        return res;
    }
};
*/
