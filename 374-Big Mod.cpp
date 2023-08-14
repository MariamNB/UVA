#include<bits/stdc++.h>
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

ll fastPow (ll base, ll power, ll inf){
    if(!power) return 1;
    if(power == 1) return base;

    ll ret = fastPow(base, power /2, inf);
    ret = (ret * ret) % inf;

    if(power &1) ret = (ret * base) % inf;
    return ret % inf;
}
int main() {
    fast;
    ll a, b, c;
    while (cin >> a >> b >> c){
        cout << fastPow(a, b, c);
        endl;
    }
}
