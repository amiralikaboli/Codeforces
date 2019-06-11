#include <iostream>

using namespace std;

int a[1111];

int main (){
	int n,m,k,f;
	cin >> n >> m >> k;
	for (int i=0;i<m;++i)
		cin >> a[i];
	cin >> f;
	int ans=0;
	for (int i=0;i<m;++i){
		int cnt=0;
		for (int j=0;j<n;++j)
			if ((f&(1<<j))!=(a[i]&(1<<j)))
				++cnt;
		if (cnt<=k)
			++ans;
	}
	cout << ans;
}