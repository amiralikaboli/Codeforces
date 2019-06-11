#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,m;
	cin >> x >> m;
	x%=m;
	for (int i=0;i<m;++i){
		if (x==0){
			cout << "Yes";
			return 0;
		}
		x*=2;
		x%=m;
	}
	cout << "No";
}