#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf ("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int r1, c1, r2, c2;
        scanf ("%d %d %d %d", &r1, &c1, &r2, &c2);
        printf ("Case %d: ", i);

        r1 = abs(r1 - r2);
        c1 = abs(c1 - c2);

        if (r1 == c1)
        {
            printf ("1\n");
        }
        else
        {
            if (r1 % 2 == c1 % 2)
            {
                printf ("2\n");
            }
            else
            {
                printf ("impossible\n");
            }
        }
    }

    return 0;
}
