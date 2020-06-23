#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x1, y1, x2, y2, t2, a, b;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> t2;

        for (int i = 1; i <= t2; i++)
        {
            cin >> a >> b;
            if (((a >= x1) && (b >= y1)) && ((a <= x2) && (b <= y2)))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
