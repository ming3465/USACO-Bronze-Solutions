#include <bits/stdc++.h>

#define fi first
#define se second
using namespace std;

void solve() {
    ifstream cin("gymnasium.in");
    ofstream cout("gymnasium.out");
    int k, n; 
    cin >> k >> n;
    vector<vector<bool>> better(n, vector<bool>(n)); 

    
    for (int s = 0; s < k; s++) {
        vector<int> cows(n); 
        for (int &c : cows) {
            cin >> c;
            c--; 
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                better[cows[j]][cows[i]] = true; 
            }
        }
    }
    int better_pairs = 0;
    for (int c1 = 0; c1 < n; c1++) {
        for (int c2 = c1 + 1; c2 < n; c2++) {
            better_pairs += !better[c1][c2] || !better[c2][c1];
        }
    }

    cout << better_pairs; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
