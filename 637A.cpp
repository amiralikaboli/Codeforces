#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=2E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
map <int,int> mp;

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return cnt*cnt; else return n*cnt*cnt;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	int mx=0;
	int winner;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++mp[x];
		if (mx<mp[x]){
			mx=mp[x];
			winner=x;
		}
	}
	cout << winner;
}