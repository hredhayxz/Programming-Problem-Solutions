/// Ques link: https://codeforces.com/problemset/problem/405/A


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
void solve(){
    //string str;
    //cin>>str;
    int N,a;
    cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it<<" ";
    }

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    cout <<endl;
}
int main(){
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

