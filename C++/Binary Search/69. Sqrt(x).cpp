/// Ques link: https://leetcode.com/problems/sqrtx/


class Solution
{
public:

    int binarySearch(int n)
    {
        long long int left=0,right=n,mid,ans=INT_MIN,mul;
        while(left<=right)
        {
            mid=left+((right-left)/2);
            mul=mid*mid;
            if(mul==n)
            {
                return mid;
            }
            else
            {
                if(mul<n)
                {
                    ans=mid;
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
        }
        return ans;
    }

    int mySqrt(int x)
    {
        return binarySearch(x);
    }
};

