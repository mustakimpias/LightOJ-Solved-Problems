#include <bits/stdc++.h>
using namespace std;
#define pi acos (-1)

int main()
{
    int t;
    scanf ("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int r1, r2, h, p;
        scanf ("%d %d %d %d", &r1, &r2, &h, &p);
        double R, V;
        R = r2 + (r1 - r2) * ((double) p / h); // over part of water
        V = (1 / 3.0) * pi * (R * R + r2 * r2 + R * r2) * p; // Formula for truncated cone

        printf ("Case %d: %lf\n", i, V);
    }

    return 0;
}
