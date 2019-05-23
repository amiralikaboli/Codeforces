#include <bits/stdc++.h>

using namespace std;

char c[10][10];

int main(){
	for (int i=0;i<8;++i)
		for (int j=0;j<8;++j)
			cin >> c[i][j];
	int ans=16;
	for (int i=0;i<8;++i)
		for (int j=0;j<8;++j)
			if (c[i][j]=='W'){
				--ans;
				break;
			}
	for (int i=0;i<8;++i)
		for (int j=0;j<8;++j)
			if (c[j][i]=='W'){
				--ans;
				break;
			}
	cout << (ans==16 ? 8 : ans);
}