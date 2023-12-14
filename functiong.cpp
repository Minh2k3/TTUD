#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

map<int, ll> mp;

ll f(int n) {
    if (n == 1 || n == 3) return n;
    if (mp[n]) return mp[n];
    if (n & 1) {
        int k = n / 4;
        if (n % 4 == 1) {
            mp[n] = 2 * f(2 * k + 1) - f(k);
        } else {
            mp[n] = 3 * f(2 * k + 1) - 2 * f(k);
        }
    } else {
        mp[n] = f(n / 2);
    }
    return mp[n];
} 

void solve() {
    cout << "Nhap n = ";
    int n; cin >> n;
    cout << "g(" << n << ") = " << f(n);
}
 
int main() {
    solve();
}