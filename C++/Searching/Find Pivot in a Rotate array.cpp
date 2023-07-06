#include<bits/stdc++.h>
using namespace std;
int findPivot(int arr[],int n)
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
int main()
{
    int arr[] = { 10, 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"The pivot index is = "<<findPivot(arr,n)<<endl;
}
