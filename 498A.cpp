#include <bits/stdc++.h>

using namespace std;

long long sgn(long long x){
	if (x==0)
		return 0;
	if (x>0)
		return 1;
	if (x<0)
		return -1;
}

int main(){
	long long x1,x2,y1,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	long long n;
	cin >> n;
	long long ans=0;
	for (long long i=0;i<n;++i){
		long long a,b,c;
		cin >> a >> b >> c;
		if (sgn(a*x1+b*y1+c)*sgn(a*x2+b*y2+c)<0)
			++ans;
	}
	cout << ans;
}