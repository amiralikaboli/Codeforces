#include <bits/stdc++.h>

using namespace std;

int x[20],y[20];

int main(){
	long long n,bx;
	cin >> n >> bx;
	long long a=0,b=0;
	for(long long i=0;i<n;++i)
		cin >> x[i];
	reverse(x,x+n);
	long long m,by;
	cin >> m >> by;
	for(long long i=0;i<m;++i)
		cin >> y[i];
	reverse(y,y+m);
	long long cnt=1;
	for (int i=0;i<n;++i){
		a+=cnt*x[i];
		cnt*=bx;
	}
	cnt=1;
	for (int i=0;i<m;++i){
		b+=cnt*y[i];
		cnt*=by;
	}
	if(a==b)
		cout << "=";
	else if(a>b)
		cout << ">";
	else if(a<b)
		cout << "<";
	return 0;
}