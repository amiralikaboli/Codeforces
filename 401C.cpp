#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	if (n>m+1 || m>2*n+2){
		cout << -1;
		return 0;
	}
	if (m>=n){
		/*if (m<=n+1){
			for (int i=0;i<n;++i)
			cout << "10";
			if (m!=n)
				cout << "1";
			return 0;
		}*/
		if (m>2*n){
			for (int i=0;i<n;++i)
				cout << "110";
			for (int i=0;i<m-2*n;++i)
				cout << "1";
			return 0;
		}
		for (int i=0;i<m-n;++i)
			cout << "110";
		for (int i=0;i<2*n-m;++i)
			cout << "10";
	}
	else{
		for (int i=0;i<m;++i)
			cout << "01";
		if (m!=n)
			cout << "0";
	}
}