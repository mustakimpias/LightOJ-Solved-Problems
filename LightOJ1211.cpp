#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int t1;
        scanf("%d", &t1);
        int x1, y1, z1, x2, y2, z2;
        int a, b, c, d, e, f;
        a = b = c = 1;
        d = e = f = 1000;
        while (t1--)
        {
            scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
            a = max(a, x1);
            b = max(b, y1);
            c = max(c, z1);
            d = min(d, x2);
            e = min(e, y2);
            f = min(f, z2);
        }
        if (d > a && e > b && f > c)
            printf("Case %d: %d\n", i, (d - a) * (e - b) * (f - c));
        else
            printf("0\n");
    }
    return 0;
}