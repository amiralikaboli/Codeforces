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

const int MaxN=1E4+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int k,n,m;
	cin >> k >> n >> m;
	if (k>n*m){
		cout << -1;
		return 0;
	}
	int o=1,e=2;
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j)
			if ((i+j)%2==0){
				cout << (o>k ? 0 : o) << " ";
				++++o;
			}
			else{
				cout << (e>k ? 0 : e) << " ";
				++++e;
			}
		cout << endl;
	}
}