#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int q;
	cin >> q;
	for (int i=0;i<q;++i){
		int x;
		cin >> x;
		cout << max(0,x-2) << endl;
	}
}