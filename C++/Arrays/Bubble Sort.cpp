/// Ques link: https://www.codingninjas.com/studio/problems/bubble-sort_980524


#include <bits/stdc++.h>
void bubbleSort(vector<int>& arr, int n)
{
    for(int i=0; i<n; i++)
    {
        bool isSwapped=false;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
                isSwapped=true;
            }
        }
        if(isSwapped==false)
        {
            break;
        }
    }
}
