#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, count;
    while (scanf("%d", &t) == 1 && t <= 1000)
    {
        for (int i = 1; i <= t; i++)
        {
            scanf("%d", &n);
            count = 0;
            while (n != 0)
            {
                a = n % 2;
                n /= 2;
                count += a;
            }

            if (count %2 == 0)
                printf("Case %d: even\n", i);
            else
                printf("Case %d: odd\n", i);
        }
    }

    return 0;
}
