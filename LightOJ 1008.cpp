#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, cases = 0, h, a;
    cin >> t;
    while(t--){
        cin >> n;
        h = ceil(sqrt(n));
        a = n - (h - 1) * (h - 1);
        if(h % 2 == 0){
            if(a > h)
                cout << "Case " << ++cases << ": " << h << " " << (1 + h * h - n) << "\n";
            else
                cout << "Case " << ++cases << ": " << a << " " << h << "\n";
        }
        else{
            if(a > h)
                cout << "Case " << ++cases << ": " << (1 + h * h - n) << " " << h << "\n";
            else
                cout << "Case " << ++cases << ": " << h << " " << a << "\n";
        }
    }
    return 0;
}
