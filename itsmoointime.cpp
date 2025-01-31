#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int count_moos(int n, vector<int>& num) {
    int count = 0;
    unordered_map<int, int> right_freq;

    // Initialize the right_freq map with frequencies of all elements
    for (int i = 0; i < n; i++) {
        right_freq[num[i]]++;
    }

    // Iterate through each element num[i] as the first element of the triplet
    for (int i = 0; i < n; i++) {
        int first = num[i];
        right_freq[first]--;  // Decrease the count of num[i] as it is no longer on the right side
        
        // Check for valid pairs [y, y] where num[i] != y
        for (auto& entry : right_freq) {
            int y = entry.first;
            if (y != first && entry.second > 1) {  // y should appear at least twice
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cout << count_moos(n, num) << endl;

    return 0;
}
