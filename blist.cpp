#include <bits/stdc++.h>

#define fi first
#define se second
using namespace std;
void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
void solve() {
    setIO("cbarn");
    int n;
    cin >> n;
    vector<int> cows(n);
    
    for (int i = 0; i < n; i++) {
        cin >> cows[i];
    }

    int tot = INT_MAX;
    
    for (int pos = 0; pos < n; pos++) {
        vector<int> newcows(n);
        for (int i = 0; i < n; i++) {
            newcows[i] = cows[(pos + i) % n];
        }
        int dist = 0;
        for (int i = 0; i < n; i++) {
            dist += newcows[i] * i;
        }
        tot = min(tot, dist);
    }
    
    cout << tot << endl;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();


}