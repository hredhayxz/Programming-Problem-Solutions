#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    if (N > M)
    {
        cout << "Champion\nRunner up\n";
    }
    else
    {
        cout << "Runner up\nChampion\n";
    }

    return 0;
}
