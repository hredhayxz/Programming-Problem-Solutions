/// Ques link: https://codeforces.com/problemset/problem/131/A


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
    string a;
    cin>>a;
    //int N;
    //cin>>N;
    int i, count=0;
    for(i=0; i<a.size(); i++)
    {
        if(a[i]==tolower(a[i]))
            count++;
    }
    if(count==0)
    {
        for(i=0; i<a.size(); i++)
            a[i]=tolower(a[i]);
        cout<< a <<endl;
    }
    else if(count==1 && a[0]==tolower(a[0]))
    {
        a[0]=toupper(a[0]);
        for(i=1; i<a.size(); i++)
            a[i]=tolower(a[i]);
        cout<< a <<endl;
    }
    else
        cout<< a <<endl;

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    //cout<<str<<endl;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

