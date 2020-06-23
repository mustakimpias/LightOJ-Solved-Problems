#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, f = 0, cases = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        int student;
        cin >> student;
        for(int j = 0; j < student; j++){
            int dust;
            cin >> dust;
            if(dust > 0) f += dust;
        }
        if(f >= 0)
            cout << "Case " << ++cases << ": " << f << "\n";
            f = 0;
    }
    return 0;
}
