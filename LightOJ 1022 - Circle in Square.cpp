#include<bits/stdc++.h>
using namespace std;

int main(){
    double radius, carea, rarea, sarea;
    int t, cases = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%lf", &radius);
        carea = 2 * acos(0.0) * radius * radius;
        rarea = (2.0 * radius) * (2.0 * radius);
        sarea = abs(carea - rarea);
        printf("Case %d: %.2lf\n", ++cases, sarea);
    }
    return 0;
}
