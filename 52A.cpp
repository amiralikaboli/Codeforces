#include <bits/stdc++.h>

using namespace std;

int t[5];

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++t[x];
	}
	cout << n-*max_element(t,t+5);
}