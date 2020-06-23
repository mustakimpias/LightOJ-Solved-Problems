#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, cases = 0;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b))
            cout << "Case " << ++cases << ": " << "yes" << "\n";
        else
            cout << "Case " << ++cases << ": " << "no" << "\n";

    }
    return 0;
}
