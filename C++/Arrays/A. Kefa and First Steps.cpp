/// Ques link: https://codeforces.com/problemset/problem/580/A


#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz size()
#define endl "\n"
#define ll long long int
#define llu unsigned long long int
#define ld long double
#define az str.begin(),str.end()
#define Ta_Ta return 0
#define pi acos(-1)
int cs=1;
void solve()
{
    //string str;
    //cin>>str;
    int N;
    cin>>N;
    int arr[N];
    int maxi=1;
    int len=1;
    cin>>arr[0];
    for(int i=1; i<N; i++)
    {
        cin>>arr[i];
        if(arr[i-1]<=arr[i])
        {
            len++;
            maxi=max(maxi,len);
        }
        else
        {
            len=1;
        }
    }

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    cout<<maxi<<endl;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

