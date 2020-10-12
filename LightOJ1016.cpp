#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, cases = 0;
    cin >> t;
    while(t--)
    {
        int Dust_Point, Brush_Width;
        cin >> Dust_Point >> Brush_Width;
        vector <ll> X (Dust_Point + 1);
        vector <ll> Y (Dust_Point + 1);
        for(int i = 0; i < Dust_Point; i++)
            cin >> X[i] >> Y[i];
        sort(Y.begin(), Y.end());
        int Total_Moves = 1;
        int Clean = Y[0] + Brush_Width;
        for(int i = 1; i < Dust_Point; i++)
        {
            if(Clean < Y[i])
            {
                Total_Moves++;
                Clean = Y[i] + Brush_Width;
            }
        }
        cout << "Case " << ++cases << ": " << Total_Moves << endl;
    }
    return 0;
}