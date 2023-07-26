/// Ques link: https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186



#include <bits/stdc++.h>
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m)
{
    vector<int> ans;
    int i=n-1;
    int j=m-1;
    int carry=0,sum;
    while(i>=0&&j>=0)
    {
        sum=a[i--]+b[j--]+carry;
        carry=sum/10;
        sum%=10;
        ans.push_back(sum);
    }
    while(i>=0)
    {
        sum=a[i--]+carry;
        carry=sum/10;
        sum%=10;
        ans.push_back(sum);
    }
    while(j>=0)
    {
        sum=b[j--]+carry;
        carry=sum/10;
        sum%=10;
        ans.push_back(sum);
    }
    if(carry!=0)
    {
        ans.push_back(carry);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
