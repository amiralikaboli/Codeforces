#include <iostream>

using namespace std;

int a[111111],q[111111],gp[11111111];
pair <int,int> p[111111];

int main (){
	int n,m;
	cin >> n;
	for (int i=1;i<=n;++i)
		cin >> a[i];
	cin >> m;
	for (int i=1;i<=m;++i)
		cin >> q[i];
	p[1].first=1;
	p[1].second=a[1];
	for (int i=2;i<=n;++i){
		p[i].first=p[i-1].second+1;
		p[i].second=p[i-1].second+a[i];
	}
	for (int i=1;i<=n;++i)
		for (int j=p[i].first;j<=p[i].second;++j)
			gp[j]=i;
	for (int i=1;i<=m;++i)
		cout << gp[q[i]] << " ";
}