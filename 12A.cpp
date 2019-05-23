#include <bits/stdc++.h>

using namespace std;

char c[5][5];

int main(){
	for (int i=0;i<3;++i)
		for (int j=0;j<3;++j)
			cin >> c[i][j];
	for (int i=0;i<3;++i)
		for (int j=0;j<3;++j)
			if (c[i][j]=='X' && c[2-i][2-j]!='X'){
				cout << "NO";
				return 0;
			}
	cout << "YES";
}