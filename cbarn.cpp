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
void solve(){
    setIO("blocks");
    int n;
    cin >> n; 
    vector<int> num(26, 0); 
    vector<pair<string, string>> word(n);

    for (int i = 0; i < n; i++) {
        cin >> word[i].first >> word[i].second;
    }

    for (int i = 0; i < n; i++) {
        vector<bool> used(26, false);  
        for (char c : word[i].first) {
            if (!used[c - 'a']) {
                num[c - 'a']++;
                used[c - 'a'] = true;
            }
        }
        for (char c : word[i].second) {
            if (!used[c - 'a']) {
                num[c - 'a']++;
                used[c - 'a'] = true;
            }
        }
    }

    for (int z : num) {
        cout << z << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();


}