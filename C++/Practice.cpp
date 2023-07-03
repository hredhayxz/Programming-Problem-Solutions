#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> intersectionItems;
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]==arr2[j])
        {
            intersectionItems.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            if(arr1[i]>arr2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    return intersectionItems;
}

int main()
{
    vector<int> numRay = { 0, 1,2,  2,3, 4,7, 8 };
    vector<int> numRay2 = {  2,  2, 3,3, 8,};

    vector<int> ans = findArrayIntersection(numRay,8,numRay2,5);
    for (int i : ans)
        cout << i << ' ' << endl;
    return 0;
}
