#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        double v1, v2, v3, a1, a2;
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);

        double t1 = v1 / a1;
        double t2 = v2 / a2;

        double s1 = 0.5 * a1 * t1 * t1;
        double s2 = 0.5 * a2 * t2 * t2;

        double t3 = max(t1, t2);

        double total_distance = s1 + s2;
        double bird_running_distance = v3 * t3;

        printf("Case %d: %lf %lf\n", i, total_distance, bird_running_distance);
    }

    return 0;
}
