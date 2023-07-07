#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int max_cards(int n, vector<string> pairs) {
  unordered_set<char> pairs_set;
  for (string pair : pairs) {
    pairs_set.insert(pair[0]);
    pairs_set.insert(pair[1]);
  }

  int max_cards = 0;
  for (char c = 'A'; c <= 'Z'; c++) {
    if (pairs_set.find(c) == pairs_set.end()) {
      max_cards++;
    }
  }

  return max_cards;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> pairs(m);
  for (int i = 0; i < m; i++) {
    cin >> pairs[i];
  }

  cout << max_cards(n, pairs) << endl;
  return 0;
}
