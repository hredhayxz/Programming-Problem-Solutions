/// Ques link: https://codeforces.com/problemset/problem/427/A


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
    int N,police=0,crime=0,crimeCount=0;;
    cin>>N;
    while(N--)
    {
        int a;
        cin>>a;
        if(a>0)
        {
            police+=a;
        }
        else
        {
            crime++;
        }
        if(police>0 && crime==1)
        {
            police--;
            crime=0;
        }
        else
        {
            if(crime>0 && police==0)
            {
                crimeCount++;
                crime=0;
            }
        }
    }

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    cout<<crimeCount<<endl;
}
int main(){
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

