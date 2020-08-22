
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans = 0;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n), b(n), optimalIdler;
	set<int> lacking;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		lacking.insert(a[i]);
	}
	for (int i = 0; i < n; i++) cin >> b[i];
	//vector<vector<int>> mapping(lacking.size() + 1);
	unordered_map<int, vector<int>> mapping;
	for (int i = 0; i < n; i++) {
		mapping[a[i]].push_back(b[i]);
	}
	for(auto it = mapping.begin(); it != mapping.end(); it++) {
		sort(it->second.begin(),it->second.end());
	}
	for (int i = 0; i < mapping.size(); i++) {
		if (mapping[i].size() > 1) {
			for (int j = 0; j < mapping[i].size() - 1; j++) {
				optimalIdler.push_back(mapping[i][j]);
			}
		}
	}
	sort (optimalIdler.begin(), optimalIdler.end());
	//cout << k - lacking.size() << endl;
	for (int i = 0; i < k - lacking.size(); i++) {
		//cout << optimalIdler[i] << endl;
		ans += optimalIdler[i];
	}
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	/* int t; cin >> t;
	while(t--) */
		solve();
}
