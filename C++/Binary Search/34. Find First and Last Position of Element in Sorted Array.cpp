class Solution
{
public:
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
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int vSize=nums.size();
        vector<int> ans;
        int leftOcr=leftSearch(nums,vSize,target);
        ans.push_back(leftOcr);
        int rightOcr=rightSearch(nums,vSize,target);
        ans.push_back(rightOcr);
        return ans;
    }
};
