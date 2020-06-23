#include <iostream>
using namespace std;

int solve(int n)
{
    if (n == 0)
    return 0;
    
    int ans = (n / 3) * 2;
    if (n % 3 == 2) ans += 1;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;

    for (int i =1; i <= t; i++)
    {
        cin >> a >> b;
        cout << "Case " << i << ": " << solve(b) - solve(a - 1) << endl;
    }

    return 0;
}
