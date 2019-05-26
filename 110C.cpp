#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=0;i<=n/4;++i)
		if ((n-4*i)%7==0){
			for (int j=0;j<i;++j)
				cout << '4';
			for (int j=0;j<(n-4*i)/7;++j)
				cout << '7';
			return 0;
		}
	cout << -1;
}