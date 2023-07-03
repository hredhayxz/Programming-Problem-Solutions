/// Ques link: https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149

#include <bits/stdc++.h>
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
