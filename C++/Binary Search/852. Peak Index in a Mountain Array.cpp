/// Ques link: https://leetcode.com/problems/peak-index-in-a-mountain-array/


class Solution
{
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int vSize=arr.size();
        int left=0, right=vSize-1,mid;
        int ans;
        while(left<=right)
        {
            mid = left+((right-left)/2);
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            {
                ans =  mid;
                break;
            }
            else
            {
                if(arr[mid]>arr[mid-1])
                {
                    left = mid;
                }
                else
                {
                    right = mid;
                }
            }
        }
        return ans;
    }
};

