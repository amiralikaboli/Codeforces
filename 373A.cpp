#include <bits/stdc++.h>

using namespace std;

int t[10];

int main(){
	int k;
	cin >> k;
	for (int i=0;i<4;++i)
		for (int j=0;j<4;++j){
			char c;
			cin >> c;
			if (c!='.')
				++t[c-'0'];
		}
	for (int i=1;i<=9;++i)
		if (t[i]>2*k){
			cout << "NO";
			return 0;
		}
	cout << "YES";
}