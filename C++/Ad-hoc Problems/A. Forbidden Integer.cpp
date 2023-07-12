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
    int N,k,x;
    cin>>N>>k>>x;
    if(k==1)
    {
        cout<<"NO";
    }
    else
    {
        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<N<<endl;
            for(int i=1;i<=N;i++)
            {
                cout<<"1";
                if(i!=N)
                {
                    cout<<" ";
                }
            }
        }
        else
        {
            if(N%2==0)
            {
                cout<<"YES"<<endl;
                cout<<N/2<<endl;
                for(int i=1;i<=N/2;i++)
                {
                    cout<<"2";
                    if(i!=N/2)
                    {
                        cout<<" ";
                    }
                }
            }
            else
            {
                if(k==2)
                {
                    cout<<"NO";
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<((N-3)/2)+1<<endl;
                    cout<<"3";
                    for(int i=1;i<=((N-3)/2)+1;i++)
                    {
                        cout<<"2";
                    }
                }
            }
        }
    }

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) solve();
    Ta_Ta;
}

