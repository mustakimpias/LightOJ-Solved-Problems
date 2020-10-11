#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 1e6 + 5;
ll mod = 1000003LL;
ll fact[N];

ll BigMod(int base, int power)
{
    ll ans;
    if(power == 0)
        return 1;
    ans = BigMod(base, power / 2);
    ans = (ans * ans) % mod;
    if(power & 1)
        ans = (ans * base) % mod;
    return ans;
}

int main()
{
    fact[0] = 1;
    for(ll i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    int t, c = 0;
    scanf("%d", &t);
    while(t--)
    {
        ll n, k;
        scanf("%lld %lld", &n, &k);
        ll ans = fact[n];
        ll kk = BigMod(fact[k], mod - 2);
        ll nk = BigMod(fact[n - k], mod - 2);
        ans = (ans * kk) % mod;
        ans = (ans * nk) % mod;
        printf("Case %d: %lld\n", ++c, ans);
    }
    return 0;
}