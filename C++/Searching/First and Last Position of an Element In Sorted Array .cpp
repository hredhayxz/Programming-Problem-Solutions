///  Ques link: https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include <bits/stdc++.h>
int rightSearch(vector<int>& arr, int n, int key)
{
    int ans=-1;
    int left=0,mid,right=n-1;
    while (left <= right)
    {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            ans=mid;
            left = mid + 1;
        }
        else
        {
            if (arr[mid] < key)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return ans;
}

int leftSearch(vector<int>& arr, int n, int key)
{
    int ans=-1;
    int left=0,mid,right=n-1;
    while (left <= right)
    {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            ans=mid;
            right = mid - 1;
        }
        else
        {
            if (arr[mid] < key)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=leftSearch(arr, n, k);
    p.second=rightSearch(arr, n, k);
    return p;
}

