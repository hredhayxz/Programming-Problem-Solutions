/// Ques link: https://codeforces.com/problemset/problem/25/A


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
    int N,x,evenCount=0,oddCount=0,evenNum,oddNum;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            evenCount++;
            evenNum=i;
        }
        else
        {
            oddCount++;
            oddNum=i;
        }
    }

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    evenCount>1?cout<<oddNum<<endl : cout<<evenNum<<endl;
}
int main(){
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

