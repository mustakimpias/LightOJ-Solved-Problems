/* 
cos (A) = (b^2 + c^2 - a^2) / 2bc 
A = acos ((b^2 + c^2 - a^2) / (2bc))
acos means cos inverse
cos (B) = (a^2 + c^2 - b^2) / 2ac
B = acos ((a^2 + c^2 - b^2) / (2ac))
cos (C) = (a2 + b^2 - c^2) / 2ab
C = acos ((a2 + b^2 - c^2) / (2ab))
area of a sectorial (Brittokola :D) = 0.5 * r^2 * theta
here theta is cos (angle)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        double R1, R2, R3;
        scanf("%lf %lf %lf", &R1, &R2, &R3);

        double a = R1 + R2;
        double b = R2 + R3;
        double c = R3 + R1;

        double s = (a + b + c) / 2.0; // perimeter

        double area = sqrt(s * (s - a) * (s - b) * (s - c)); // total triangle area

        double area1 = .5 * (R1 * R1) * acos((a * a + c * c - b * b) / (2 * a * c)); // Read the top comment section
        double area2 = .5 * (R2 * R2) * acos((a * a + b * b - c * c) / (2 * a * b)); // And try to understand
        double area3 = .5 * (R3 * R3) * acos((b * b + c * c - a * a) / (2 * b * c));

        printf("Case %d: %lf\n", i, area - (area1 + area2 + area3));
    }

    return 0;
}
