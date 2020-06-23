#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n > 10){
            int a = n - 10;
            int b = 10;
            cout << a << " " << b << "\n";
        }
        else{
            int c = 0;
            cout << c << " " << n << "\n";
        }
    }
    return 0;
}
