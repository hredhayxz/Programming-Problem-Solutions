/// Ques link: https://leetcode.com/problems/search-in-rotated-sorted-array/


class Solution
{
public:
    int binarySearch(vector<int>& arr, int s, int e, int key)
    {
        int left=s,mid,right=e;
        while (left <= right)
        {
            int mid = left + ((right - left) / 2);
            if (arr[mid] == key)
            {
                return mid;
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
        return -1;
    }

    int findPivot(vector<int>& arr,int n)
    {
        int start=0,end=n-1,mid;
        while(start<end)
        {
            mid=start+((end-start)/2);
            if(arr[mid]>=arr[0])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        return start;
    }
    int search(vector<int>& nums, int target)
    {
        int n=nums.size();
        int pivot=findPivot(nums,n);
        if(target>=nums[pivot] && target<=nums[n-1])
        {
            return binarySearch(nums, pivot, n-1, target);
        }
        else
        {
            return binarySearch(nums, 0, pivot, target);
        }
    }
};

