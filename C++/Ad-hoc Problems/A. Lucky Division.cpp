/// Ques link: https://codeforces.com/problemset/problem/122/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[12]={4,7,44,47,74,77,444,447,477,744,774,777};
    for(int i=0;i<12;i++)
    {
        if(n==arr[i]||n%arr[i]==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
