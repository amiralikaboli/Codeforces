#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if (n<=2){
		cout << -1;
		return 0;
	}
	for (int i=0;i<n-1;++i)
		cout << i+2 << " ";
	cout << 1;
}