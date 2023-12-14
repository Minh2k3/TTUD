#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

map<int, ll> mp;

ll f(int n) {
    if (n < 3) return n;
    if (mp[n]) return mp[n];
    int k = n / 3;
    if (n % 3 == 0) {
        mp[n] = f(2 * k);
    } else if (n % 3 == 1) {
        mp[n] = f(2 * k) + f(2 * k + 1);
    } else {
        mp[n] = f(2 * k) + f(2 * k + 1) + f(2 * k + 2);
    }
    return mp[n];
} 

void solve() {
    cout << "Nhap n = ";
    int n; cin >> n;
    cout << "f(" << n << ") = " << f(n);
}
 
int main() {
    solve();
}