#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if (n<4){
		cout << "NO";
		return 0;
	}
	cout << "YES" << endl;
	if (n%2==0){
		cout << "1 * 2 = 2\n";
		cout << "2 * 3 = 6\n";
		cout << "6 * 4 = 24\n";
		for (int i=6;i<=n;i+=2){
			cout << i << " - " << i-1 << " = " << 1 << endl;
			cout << "1 * 24 = 24" << endl;
		}
	}
	else{
		cout << "4 * 5 = 20\n";
		cout << "3 + 2 = 5\n";
		cout << "5 - 1 = 4\n";
		cout << "20 + 4 = 24\n";
		for (int i=7;i<=n;i+=2){
			cout << i << " - " << i-1 << " = " << 1 << endl;
			cout << "1 * 24 = 24" << endl;
		}
	}
}