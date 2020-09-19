#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e7+7;
ll a[10002];

int main()
{
    ll t, n, c = 0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &n);
        for(ll i = 6; i <= n; i++)
            a[i] = (a[i-1] + a[i-2] + a[i-3] + a[i-4] + a[i-5] + a[i-6])%N;
        printf("Case %d: %d\n", ++c, a[n]%N);
    }
    return 0;
}