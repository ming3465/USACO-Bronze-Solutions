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
    ifstream fin("pails.in");
    ofstream fout("pails.out");
    int x,y,m;
    fin >> x>> y >> m;
    
    int ans = 0;
    int maxx = m/x;
    int maxy = m/y;
    for (int i = 0; i < maxx; i++){
        for (int j = 0; j < maxy; j++){
            int val = x*(i + 1) + y *(j + 1);
            if (val <= m) ans = max(ans, val);
        }
        
    
    }
    fout << ans;
    
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();


}