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
            cout<<"  ";
        }
        int k=i;
        for(;j<=N;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=N+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}




