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
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    int s=0,e=N-1,taxiCount=1;
    while(s<e)
    {
        int res=arr[e],res2=0;
        while(5>res)
        {
            res2=res+arr[s];
            if(res2>4)
            {
                taxiCount++;
                e--;
                res2=0;
            }
            else
            {
                res=res2;
                s++;
            }
        }
        taxiCount++;
        /*
        if(arr[e]+arr[s]>4)
        {
            e--;
            taxiCount++;
        }
        else
        {
            s++;
            e--;
            taxiCount++;
        }
        */
    }

    //cout<<"Case #"<<cs++<<": ";
    //cout<<"Case "<<cs++<<": ";
    cout<<taxiCount<<endl;
}
int main(){
    int T=1;
    //cin>>T;
    while(T--) solve();
    Ta_Ta;
}

