#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	for (int i=1;i<n;++i)
		if (a[i]%a[0]){
			cout << -1;
			return 0;
		}
	cout << a[0];
}