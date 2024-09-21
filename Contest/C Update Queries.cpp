
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

// Function to process and solve each test case
void processTestCase() {
  int num_tests;
  cin >> num_tests;

  while (num_tests--) {
    int length_s, num_updates;
    cin >> length_s >> num_updates;

    string original_string;
    cin >> original_string;

    vector<int> indices(num_updates);
    for (int &index : indices) {
      cin >> index;
    }

    string update_characters;
    cin >> update_characters;

    // Collect unique indices and sort them
    set<int> unique_indices(indices.begin(), indices.end());
    vector<int> sorted_indices(unique_indices.begin(), unique_indices.end());
    sort(sorted_indices.begin(), sorted_indices.end());

    // Sort update_characters to apply in lexicographical order
    sort(update_characters.begin(), update_characters.end());

    // Map to store index and corresponding character updates
    map<int, char> index_to_char;
    for (size_t i = 0; i < sorted_indices.size(); ++i) {
      index_to_char[sorted_indices[i]] = update_characters[i];
    }

    // Apply updates to the original_string
    for (const auto &pair : index_to_char) {
      original_string[pair.first - 1] = pair.second;
    }

    // Output the updated string
    cout << original_string << endl;
  }
}

int main() {
  processTestCase();
  return 0;
}
