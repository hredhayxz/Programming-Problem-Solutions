/// Ques link: https://codeforces.com/problemset/problem/208/A


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
    string str;
    cin>>str;
    bool flag=true;
    //cin>>N;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {
            i+=2;
            if(!flag)
            {
                cout<<" ";
            }
            continue;
        }
        else{
                flag=false;
            cout<<str[i];
        }
    }

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    //cout<< <<endl;
}
int main(){
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

