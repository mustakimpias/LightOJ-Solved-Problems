#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, w, odd, even;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> w;
        if (w % 2 != 0)
        {
            cout << "Case " << i << ": " << "Impossible\n";
            continue;
        }
        odd = w / 2;
        even = 2;
        while (odd % 2 == 0)
        {
            odd = odd / 2;
            even = even * 2;
        }

        cout << "Case " << i << ": " << odd << " " << even << endl;
    }

    return 0;
}