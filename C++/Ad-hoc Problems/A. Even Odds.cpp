/// Ques link: https://codeforces.com/problemset/problem/318/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k,part;
    cin >> n >> k;

    if(n%2==0)
    {
        part=n/2;
    }
    else
    {
        part=n/2+1;
    }
    if(k<=part)
    {
        cout<<(2*k)-1<<endl;
    }
    else
    {
        cout<<(k-part)*2<<endl;
    }

    return 0;
}
