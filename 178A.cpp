#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	long long ans=0;
	for(int i=0;i<n-1;++i){
		int lg=log2(n-i-1);
		ans+=a[i];
		a[i+(1<<lg)]+=a[i];
		cout << ans << endl;
	}
}