#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
string l[MaxN],f[MaxN];
int p[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> f[i] >> l[i];
		if (l[i]<f[i])
			swap(f[i],l[i]);
	}
	for (int i=0;i<n;++i){
		cin >> p[i];
		--p[i];
	}
	string cck=min(f[p[0]],l[p[0]]);
	for (int i=1;i<n;++i){
		if (cck>=l[p[i]] && cck>=f[p[i]]){
			cout << "NO";
			return 0;
		}
		if (cck>f[p[i]])
			cck=l[p[i]];
		else
			cck=min(f[p[i]],l[p[i]]);
	}
	cout << "YES";
}