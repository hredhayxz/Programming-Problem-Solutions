#include<bits/stdc++.h>
using namespace std;
void printSortedArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    printSortedArray(arr,n);
}
int main()
{
    int arr[10]={64,25,12,22,11,5,3,15,1,25};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,arrSize);
    return 0;
}
