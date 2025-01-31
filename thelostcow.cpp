#include <bits/stdc++.h>
#define For(i, a, b) for (int i = (a); i < (b); ++i)
#define fi first
#define se second
using namespace std;
#define vi vector<int>
#define pb push_back
void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {

	setIO("lostcow");

	int x, y;
	cin >> x >> y;

	vi move;

	if (x == y) {
		cout << 0 << endl;
	} else if (x < y) {
		int dist = 1;

		while (x + dist < y) {
			move.pb(x + dist);
			dist *= -2;
		}

		move.pb(x + dist);

		int ans = 1;

		For(i, 0, move.size() - 1) { ans += abs(move[i] - move[i + 1]); }
		ans -= (move[move.size() - 1] - y);
		cout << ans << endl;
	} else {
		int dist = 1;

		while (x + dist > y) {
			move.pb(x + dist);
			dist *= -2;
		}

		move.pb(x + dist);

		int ans = 1;

		For(i, 0, move.size() - 1) { ans += abs(move[i] - move[i + 1]); }
		ans -= (y - move[move.size() - 1]);
		cout << ans << endl;
	}
}
