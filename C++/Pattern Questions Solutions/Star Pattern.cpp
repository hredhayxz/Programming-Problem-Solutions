#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,j;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i*2-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=N;i>=1;i--)
    {
        for(j=1;j<=N-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i*2-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}





