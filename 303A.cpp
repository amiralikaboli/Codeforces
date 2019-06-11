#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>
#define X real()
#define Y imag()
#define cout cout << setprecision(18)

const int MaxN=2E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int32_t main(){
	int n;
	cin >> n;
	if (n%2==0)
		cout << -1;
	else{
		for (int i=0;i<n;++i)
			cout << i << " ";
		cout << endl;
		for (int i=0;i<n;++i)
			cout << i << " ";
		cout << endl;
		for (int i=0;i<n;++i)
			cout << (2*i)%n << " ";
	}
}