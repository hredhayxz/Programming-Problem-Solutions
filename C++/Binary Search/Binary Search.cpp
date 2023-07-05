#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left=0,mid,right=n-1;
    while (left <= right)
    {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 5, 7, 10, 19, 40, 60,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int finder = 7;
    int result = binarySearch(arr, n, finder);
    if(result == -1)
    {
        cout<<"Element is not present in array"<<endl;
    }
    else
    {
        cout<<"Element is present at index = "<<result<<endl;
    }
    return 0;
}

