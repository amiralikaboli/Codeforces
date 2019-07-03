#include <bits/stdc++.h>

using namespace std;

const long long MaxN=1E5+10;
long long m[MaxN],b[MaxN];
long long x_first[MaxN],x_sec[MaxN];
pair <long long,long long> p[MaxN];

int main(){
	long long n;
	cin >> n;
	long long x1,x2;
	cin >> x1 >> x2;
	for (long long i=0;i<n;++i){
		cin >> m[i] >> b[i];
		x_first[i]=x1*m[i]+b[i];
		x_sec[i]=x2*m[i]+b[i];
		p[i].first=x_first[i];
		p[i].second=x_sec[i];
	} 
	sort(p,p+n);
	for (long long i=1;i<n;++i)
		if (p[i-1].second>p[i].second){
			cout << "YES";
			return 0;
		}
	cout << "NO";
	return 0;
}