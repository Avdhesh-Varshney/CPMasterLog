#include<bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())

struct Seg {
	int l, r;
	bool operator< (const Seg &oth) const {
		if(l != oth.l) return l < oth.l;
		return r < oth.r;
	};
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
    cin >> t;
	while (t--) {
        int n;
        cin >> n;
        vector<Seg> seg(n);
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++) cin >> seg[i].l >> seg[i].r;

        for(int k = 0; k < 2; k++) {
            vector<int> ord(n);
            iota(ord.begin(), ord.end(), 0);

            sort(ord.begin(), ord.end(), [&seg](int i, int j) {
                if(seg[i].l != seg[j].l) return seg[i].l < seg[j].l;
                return seg[i].r > seg[j].r;
            });

            set<int> bounds;
            for(int i : ord) {
                auto it = bounds.lower_bound(seg[i].r);
                if(it != bounds.end()) ans[i] += *it - seg[i].r;
                bounds.insert(seg[i].r);
            }

            for(auto &s : seg) {
                s.l = -s.l;
                s.r = -s.r;
                swap(s.l, s.r);
            }
        }

        map<Seg, int> cnt;
        for(auto s: seg) cnt[s]++;
        for(int i = 0; i < n; i++) if(cnt[seg[i]] > 1) ans[i] = 0;
        for(int a : ans) cout << a << endl;
    }
	return 0;
}