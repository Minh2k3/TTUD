#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    sort(all(v), greater<int>());
    int res = 1, maxK = v[0];
    for (int i = 1; i < n; ++i) {
        if (maxK) {
            ++res;
            maxK = min(maxK - 1, v[i]);
        } else break;
    }
    cout << res;
}
 
int main() {
    solve();
}