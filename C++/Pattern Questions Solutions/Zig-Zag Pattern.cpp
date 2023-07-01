#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int row=1;row<=3;row++)
    {
        for(int col=1;col<=N;col++)
        {
            if(((row+col)%4==0)||((row==2)&&(col%4==0)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}




