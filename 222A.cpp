#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	--k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	bool b=true;
	for (int i=1;i<n;++i)
		if (a[i]!=a[0])
			b=false;
	if (b==true){
		cout << 0;
		return 0;
	}
	for (int i=k+1;i<n;++i)
		if (a[i]!=a[k]){
			cout << -1;
			return 0;
		}
	int ind=0;
	for (int i=0;i<k;++i)
		if (a[i]!=a[k])
			ind=i;
	cout << ind+1;
}