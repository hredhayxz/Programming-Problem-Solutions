/// Ques link: https://www.codingninjas.com/studio/problems/swap-alternate_624941

#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[],int n)
{
    for(int i=0; i<n; i+=2)
    {
        if(i<n-1)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void getInput(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        getInput(arr,n);
        swapAlternate(arr,n);
        printArray(arr,n);
    }
    return 0;
}
