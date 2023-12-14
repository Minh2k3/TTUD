#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
vector<int> v;
int cnt = 0;

bool check(int a1, int q) {
    return (find(all(v), a1 + 2 * q) != v.end() &&
            find(all(v), a1 + 3 * q) != v.end() &&
            find(all(v), a1 + 4 * q) != v.end());
}

void solve() {
    int n; cin >> n;
    for (int i = n; i > 0; --i) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            cnt += check(v[i], v[j] - v[i]);
        }
    }
    cout << cnt;
}
 
int main() {
    solve();
}