#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

long long countMoos(int N, const vector<int>& arr) {
    unordered_map<int, int> freq;
    unordered_map<int, int> prefixFreq;
    unordered_set<string> distinctMoos;
    
    for (int i = 0; i < N; ++i) {
        freq[arr[i]]++;
    }
    
    for (int i = 0; i < N; ++i) {
        int b = arr[i];
        
        if (freq[b] >= 2) {
            for (unordered_map<int, int>::iterator it = prefixFreq.begin(); it != prefixFreq.end(); ++it) {
                int a = it->first;
                if (a != b) {
                    string moo = to_string(a) + " " + to_string(b) + " " + to_string(b);
                    distinctMoos.insert(moo);
                }
            }
        }

        prefixFreq[b]++;
    }
    
    return distinctMoos.size();
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    
    cout << countMoos(N, arr) << endl;
    
    return 0;
}
