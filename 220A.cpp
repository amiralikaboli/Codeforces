#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN],p[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		p[i]=a[i];
	}
	sort(p,p+n);
	int cnt=0;
	for (int i=0;i<n;++i)
		if (p[i]!=a[i])
			++cnt;
	if (cnt>2)
		cout << "NO";
	else
		cout << "YES";
}