#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=12;
    //cout<<(n&~(n-1));
    int position = 0;
    while (n > 0)
    {
        n = n >> 1;
        position++;
    }
    cout<<position;
    return 0;
}
