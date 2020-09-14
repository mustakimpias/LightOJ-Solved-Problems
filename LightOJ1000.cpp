#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case " << ++c <<": " << a + b << endl;
    }
    return 0;
}