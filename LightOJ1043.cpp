#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        double AB, AC, BC, RATIO, AD;
        scanf("%lf %lf %lf %lf", &AB, &AC, &BC, &RATIO);
        RATIO = (RATIO) / (RATIO + 1);
        AD = sqrt(RATIO) * AB;
        printf("Case %d: %.6lf\n", i, AD);
    }
    return 0;
}