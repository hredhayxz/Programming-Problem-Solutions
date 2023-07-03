/// Ques link: https://www.codingninjas.com/studio/problems/duplicate-in-array_893397

int findDuplicate(vector<int> &arr)
{
    int res=0;
    for(int i=0; i<arr.size(); i++)
    {
        res^=arr[i];
    }
    for(int i=1; i<arr.size(); i++)
    {
        res^=i;
    }
    return res;
}
