#include <bits/stdc++.h>

using namespace std;

const int MaxN=20+10;
const int INF=1E9+7;
double a[MaxN],b[MaxN],d[MaxN];

int32_t main(){
	double n,v;
	cin >> n >> v;
	double sum=0;
	for (int i=0;i<n;++i){
		cin >> a[i];
		sum+=a[i];
	}
	for (int i=0;i<n;++i){
		cin >> b[i];
		d[i]=b[i]/a[i];
	}
	double ans=INF;
	for (int i=0;i<n;++i)
		ans=min(ans,d[i]*sum);
	cout << setprecision(15) << min(ans,v);
}