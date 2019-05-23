#include <bits/stdc++.h>

using namespace std;

bool c[10];
char a[100+10][100+10];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> a[i][j];
	cerr << n << " " << m << endl;
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j)
			cerr << a[i][j];
		cerr << endl;
	}
	for (int i=0;i<n;++i)
		for (int j=1;j<m;++j)
			if (a[i][j]!=a[i][j-1]){
				cerr << 1;
				cout << "NO";
				return 0;
			}
	for (int j=1;j<n;++j)
		if (a[j][0]==a[j-1][0]){
			cerr << 2;
			cout << "NO";
			return 0;
		}
	cout << "YES";
}