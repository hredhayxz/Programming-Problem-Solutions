/// Ques link: https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028


#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int>arr, int n, int K)
{
    set<vector<int>> mySet;
    sort(arr.begin(), arr.end());

    for (int high = n - 1; high >= 2; high--)
    {
        int low = 0, mid = high - 1;
        while (low < mid)
        {
            int sum = arr[low] + arr[mid] + arr[high];
            if (sum == K)
            {
                mySet.insert({arr[low], arr[mid], arr[high]});
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
