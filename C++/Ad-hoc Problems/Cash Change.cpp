/// Ques link: https://toph.co/p/cash-change


#include <bits/stdc++.h>

using namespace std;

vector<int> required_notes(int n)
{
    vector<int> notes;
    int nt[] = {1, 5, 10, 50, 100, 500};
    for (int i = 5; i >= 0; i--)
    {
        while (n >= nt[i])
        {
            notes.push_back(nt[i]);
            n -= nt[i];
        }
    }
    return notes;
}

int main()
{
    int n;
    cin >> n;
    vector<int> notes = required_notes(n);
    sort(notes.begin(),notes.end());
    for (int note : notes)
    {
        cout << note << " ";
    }
    cout << endl;
    return 0;
}
