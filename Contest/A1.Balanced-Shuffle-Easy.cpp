#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool custom_compare(const pair<int, int> &a, const pair<int, int> &b,
                    const string &str) {
  if (a.first != b.first) {
    return a.first < b.first; // Sort by balance first
  } else {
    // Tiebreaker: Use original order within the string
    return a.second < b.second; // Sort by position in original order
  }
}

int main() {
  string s;
  cin >> s;

  // Create prefix balance table
  vector<pair<int, int>> table;
  int balance = 0;
  for (int i = 0; i < s.size(); ++i) {
    balance += (s[i] == '(') ? 1 : -1;
    table.push_back({balance, i});
  }

  // Sort table by prefix balance and position with tiebreaker
  sort(table.begin(), table.end(),
       [&s](const pair<int, int> &a, const pair<int, int> &b) {
         return custom_compare(a, b, s);
       });

  // Construct and print the balanced shuffle
  string t;
  for (const auto &p : table) {
    if (p.second < s.size()) { // Check if index is within bounds
      t.push_back(s[p.second]);
    } else {
      // Handle edge case (e.g., skip appending or log an error)
    }
  }
  cout << t << endl;

  return 0;
}

