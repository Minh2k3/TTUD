#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll k; cin >> k;
    if (k < 0) {
        cout << 0;
        return;
    }
    ll fib1 = 0, fib2 = 1, res = 1;
    while (res <= k) {
        res = fib1 + fib2;
        fib1 = fib2;
        fib2 = res;
    }
    cout << res;
}

int main() {
    solve();
}