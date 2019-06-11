#include <iostream>
#include <algorithm>

using namespace std;

int main (){
	int n,m,f[100];
	cin >> n >> m;
	for (int i=0;i<m;++i)
		cin >> f[i];
	sort(f,f+m);
	int ans=1000*1000*1000;
	for (int i=0;i<=m-n;++i)
		ans=min(ans,f[n+i-1]-f[i]);
	cout << ans;
}