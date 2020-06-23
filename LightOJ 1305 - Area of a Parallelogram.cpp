#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf ("%d", &t);

    for (int i = 1; i <=t; i++)
    {
        int Ax, Ay, Bx, By, Cx, Cy;
        scanf ("%d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
        int Dx = Ax + Cx - Bx;
        int Dy = Ay + Cy - By;
        int area1 = Ax * By + Bx * Cy + Cx * Dy + Dx * Ay;
        int area2 = Ay * Bx + By * Cx + Cy * Dx + Dy * Ax;
        int area = abs (area1 - area2);
        area = area / 2;
        printf ("Case %d: %d %d %d\n", i, Dx, Dy, area);
    }

    return 0;
}
