#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define endl cout << '\n'
#define vint vector<int>
#define vll vector<ll>
#define pb push_back
#define S second
#define F first
#define wl int t; cin >> t; while(t--)
#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

ll nCr(ll n, ll r);

int main() {
    fast;
    ll n, r;
    while(cin >> n >> r){
        if(!n && !r) break;
        cout << n << ' ' << "things taken " << r << ' ' << "at a time is " << nCr(n, r) << " exactly.\n";
    }
}

ll nCr(ll n, ll r){
    if(r > n) return 0;
    if(!r || r == n) return 1;
    return nCr(n - 1, r - 1) * n / r;
}
