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
    
    int n ;cin >> n; 
    int ans = 0;
    vector<pair<char, int>> liar(n);
    for (int i = 0;i < n; i++){
        cin >> liar[i].fi >> liar[i].se;
    }
    for (int i= 0;i < n - 1 ;i++){
        int num;
        num = liar[i].se;
        if (liar[i + 1].se > num && liar[i].fi == 'L'){
            ans++;
        }
        if (liar[i +1].se < num && liar[i].fi == 'G'){
            ans++;
        }
    }
    cout << ans;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();


}