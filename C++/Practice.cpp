#include<bits/stdc++.h>

using namespace std;

int main() {
  int nums[] = {0, 4, 3, 2, 7, 8, 2, 3, 1};
  int n = sizeof(nums) / sizeof(nums[0]);

  // Create an unordered_map to store the integers and their frequencies.
  unordered_map<int, int> my_map;

  for (int i = 0; i < n; i++) {
    my_map[nums[i]]++;
  }

  // Iterate over the unordered_map and find all the integers with frequency 2.
  vector<int> duplicates;
  for (auto& it:my_map) {
    if (it.second == 2) {
      duplicates.push_back(it.first);
    }
  }

  // Print the duplicates.
  for (int i = 0; i < duplicates.size(); i++) {
    cout << duplicates[i] << " ";
  }

  return 0;
}
