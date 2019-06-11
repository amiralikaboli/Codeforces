#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN],b[MaxN];
int t[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i] >> b[i];
		++t[a[i]];
	}
	for (int i=0;i<n;++i)
		cout << n-1+t[b[i]] << " " << n-1-t[b[i]] << endl;
}
