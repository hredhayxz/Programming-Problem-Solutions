/// Ques link: https://codeforces.com/problemset/problem/479/A


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
    int a,b,c;
    cin>>a>>b>>c;
    int ans=a*b*c;
    ans=max(ans,a+b+c);
    ans=max(ans,a+b*c);
    ans=max(ans,(a+b)*c);
    ans=max(ans,a*b+c);
    ans=max(ans,a*(b+c));

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    cout<< ans<<endl;
}
int main(){
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

