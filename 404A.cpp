#include <iostream>
#include <set>

using namespace std;

char c[333][333];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			cin >> c[i][j];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (c[i][i]!=c[j][j]){
				cout << "NO";
				return 0;
			}
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (c[i][n-i-1]!=c[j][n-j-1]){
				cout << "NO";
				return 0;
			}
	char t=c[0][1];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (i!=j && j!=n-i-1)
				if (c[i][j]!=t){
					cout << "NO";
					return 0;
				}
	if (c[0][0]==t){
		cout << "NO";
		return 0;
	}
	cout << "YES";
}