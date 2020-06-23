#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, ab, ans, x, i, cases = 0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        ab = a * b;
        if(a==1 || b==1)    ans = ab;
        else if(a==2 || b==2)
        {
            if(a==2) x = b;
            else     x = a;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(ab%2 == 0) ans = ab/2;
        else ans = (ab/2)+1;
        cout << "Case " << ++cases << ": " << ans << "\n";
    }
    return 0;
}
