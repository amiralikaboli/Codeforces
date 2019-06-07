#include <bits/stdc++.h>

using namespace std;

const int MaxA=1000+10;
int t[MaxA];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		++t[a];
	}
	for (int i=0;i<MaxA;++i)
		if (t[i]>(n+1)/2){
			cout << "NO";
			return 0;
		}
	cout << "YES";
}