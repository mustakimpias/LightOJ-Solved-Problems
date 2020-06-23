#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        double R, r;
        int n;
        cin >> R >> n;

        double angle = pi / n;
        double sine_angle = sin(angle);

        r = (R * sin(angle)) / (1 + sin(angle));

        printf("Case %d: %lf\n", i, r);
    }

    return 0;
}
