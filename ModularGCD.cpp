#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define int128 __uint128_t

typedef long long ll;

ll powMod(ll a, ll b, ll M)
{
    a %= M;
    int128 aa = a;
    int128 res = 1;
    while(b)
    {
        if(b&1)
        {
            res *= aa;
            res %= M;
        }
        b >>= 1;
        aa *= aa;
        aa %= M;
    }
    return (ll)res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll k = abs(a - b);
        if(a == b) cout << (powMod(a, n, MOD) + powMod(b, n, MOD)) % MOD << "\n";
        else cout << __gcd(powMod(a, n, k) + powMod(b, n, k), abs(a - b)) % MOD << "\n";
    }

    return 0;
}