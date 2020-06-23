#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, cases = 0;
	cin >> t;

	while(t--){
		int a, b, temp, time = 0;
		cin >> a >> b;

		if(a < b) temp = b - a;

		else temp = a - b;

		time = (temp * 4) + 11 + (a * 4) + 8;

		cout << "Case " << ++cases << ": " << time << endl;
	}
	return 0;

}
