#include <bits/stdc++.h>

#define fi first
#define se second
using namespace std;
void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    setIO("blist");
    int n; cin >> n; 
    vector <pair<int,int>> times(n);
    vector <int> bucket(n);
    vector <bool> start(n, false);
    vector <bool> finish(n, false);
    int prefix[1000];
    memset(prefix, 0, sizeof(prefix));
    int mxt = 0;
    for (int i = 0; i < n; i++){
        cin >> times[i].fi >> times[i].se >> bucket[i];
        mxt = max(mxt, times[i].se);
    }
    for (int i = 0;i < mxt; i++){
        for (int j = 0; j < n; j++){
            if (i == times[j].fi){
                start[j] = true;
            }
            if (i > times[j].se){
                finish[j] = true;
            }
            if (start[j] && !finish[j]){
                prefix[i] += bucket[j];
            }
        }
        
    }
    int ans = 0;
    for (int i = 0; i < 1000; i++){
        ans = max(ans, prefix[i]);
    }
    cout << ans;
    
    
    
}

int main() {
   // setIO("blist");
    solve();


}