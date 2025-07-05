#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100000
#define long_max 9223372036854775807
const ll mod = 7 + 1e9;

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}


ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

ll fact(ll n)
{
	if(n==0)
		return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

bool compare(ll& x, ll& y) {
	// if(x.first == y.first) return x.second > y.second;
	return x > y;
}

void solve() {
   ll n;
   cin >> n;
   ll sum = n*(n+1)/2;
   for (int i=0; i<n-1; ++i) {
    ll temp;
    cin >> temp;
    sum -= temp;
   }
   cout << sum << endl;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	// generate();
    ll t=1;
    // cin>>t;
    while(t--) {
    	solve();
    }
    
    return 0;
}
