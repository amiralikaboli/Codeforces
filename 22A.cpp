#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	for (int i=1;i<n;++i)
		if (a[i]!=a[i-1]){
			cout << a[i];
			return 0;
		}
	cout << "NO"; 
}