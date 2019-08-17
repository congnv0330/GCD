#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll load(string s, ll a)
{
    ll res = 0;
    ll n = s.length();
    for(ll i = 0; i < n; ++i)
        res = (res * 10 + s[i] - '0') % a;
    return res;
}

int main()
{
    long n;
    cin >> n;

    while(n--)
    {
        ll a;
        string b;
        cin >> a >> b;
        
        if(a == 0) cout << b << endl;
        else cout << __gcd(load(b, a), a) << "\n";
    }

    return 0;
}