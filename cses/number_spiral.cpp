#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100000
#define long_max 9223372036854775807
const ll mod = 7 + 1e9;

ll gcd(const ll a, const ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


ll lcm(const ll a, const ll b) {
    return (a / gcd(a, b)) * b;
}

ll fact(const ll n) {
    if (n == 0)
        return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll nCr(const ll n, const ll r) {
    return fact(n) / (fact(r) * fact(n - r));
}

bool compare(const ll &x, const ll &y) {
    // if(x.first == y.first) return x.second > y.second;
    return x > y;
}

void solve() {
    ll y, x;
    cin >> y >> x;
    ll mn = min(x, y);
    ll mx = max(x, y);
    ll result = (mx-1) * (mx-1);
    if(mx%2) {
        ll temp = x;
        x = y;
        y = temp;
    }
    result = result + y + (mx - x);
    cout << result << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
