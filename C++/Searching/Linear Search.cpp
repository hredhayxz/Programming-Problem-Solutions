#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 7, 10, 19, 40, 4, 5, 60,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int finder = 5;
    int result = linearSearch(arr, n, finder);
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

