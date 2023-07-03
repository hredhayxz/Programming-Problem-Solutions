#include <bits/stdc++.h>
using namespace std;
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

int main()
{
    vector<int> numRay = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };

    vector<int> ans = findDuplicates(numRay);
    for (int i : ans)
        cout << i << ' ' << endl;
    return 0;
}
