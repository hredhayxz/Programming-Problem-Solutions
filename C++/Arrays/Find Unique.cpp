/// Ques link: https://www.codingninjas.com/studio/problems/find-unique_625159

#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[],int size)
{
    int res=0;
    for(int i=0; i<size; i++)
    {
        res=arr[i]^res;
    }
    return res;
}
void getInput(int arr[],int size)
{
    for(int i=0; i<size; i++)
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
        int N;
        cin>>N;
        int arr[N];
        getInput(arr,N);
        cout<<findUnique(arr,N)<<endl;
    }
    return 0;
}
