#include <iostream>

using namespace std;

int main (){
	int ans=1000*1000*1000;
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	for (int i=0;i<=n/m;++i)
		ans=min(ans,i*b+a*(n-i*m));
	cout << min(ans,b*((n+m-1)/m));
}