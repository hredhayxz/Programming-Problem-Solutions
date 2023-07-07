/// Ques link: https://codeforces.com/problemset/problem/58/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string say_hello="hello";
    int i,j;
    for(i=j=0;i<str.size();i++)
    {
        if(str[i]==say_hello[j])
        {
            j++;
            if(say_hello.size()==j)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
