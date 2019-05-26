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
#define cout cout << fixed << setprecision(12)

const int MaxN=2E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
string lcky;

bool check(int n){
	int x=n;
	string musk="";
	while (x){
		if (x%10==4 || x%10==7)
			musk+=(x%10+'0');
		x/=10;
	}
	if (lcky==musk)
		return true;
	return false;
}

int32_t main(){
	int n;
	cin >> n >> lcky;
	reverse(lcky.begin(),lcky.end());
	for (int i=n+1; ;++i)
		if (check(i)){
			cout << i;
			return 0;
		}
}