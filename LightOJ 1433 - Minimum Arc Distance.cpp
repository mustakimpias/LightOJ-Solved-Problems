#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int Ox, Oy, Ax, Ay, Bx, By;
        scanf("%d %d %d %d %d %d", &Ox, &Oy, &Ax, &Ay, &Bx, &By);

        double OA = sqrt(((Ox - Ax) * (Ox - Ax)) + ((Oy - Ay) * (Oy - Ay))); // d = sqrt ((x2 - x1) ^2 + (y2 - y1)^2)
        double AB = sqrt(((Ax - Bx) * (Ax - Bx)) + ((Ay - By) * (Ay - By)));
        double O = acos(((2 * OA * OA) - (AB * AB)) / (2 * OA * OA)); // because OA = OB

            /*
        cos (C) = (a2 + b^2 - c^2) / 2ab
        C = acos ((a2 + b^2 - c^2) / (2ab))
        acos () means cos inverse
        This comment section is just for beginner
        Who has just started to learn programming
        */

        double s = O * OA; // we know s = r * theta; here r = OA and theta = O

        printf("Case %d: %lf\n", i, s);
    }

    return 0;
}
