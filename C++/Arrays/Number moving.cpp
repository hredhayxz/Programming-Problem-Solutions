/// Problrm link: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <bits/stdc++.h>
using namespace std;
int main() {

	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int length=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+length);
	for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
