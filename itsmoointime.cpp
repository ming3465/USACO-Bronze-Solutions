#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int count_moos(int n, vector<int>& num) {
    int count = 0;
    unordered_map<int, int> right_freq;

    
    for (int i = 0; i < n; i++) {
        right_freq[num[i]]++;
    }
    for (int i = 0; i < n; i++) {
        int first = num[i];
        right_freq[first]--;  
        for (auto& entry : right_freq) {
            int y = entry.first;
            if (y != first && entry.second > 1) {  
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
