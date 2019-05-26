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

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	if (n<3)
		cout << -1;
	else if (n==3)
		cout << 210;
	else{
		cout << 1;
		for (int i=0;i<n-4;++i)
			cout << 0;
		if(n%6==0)
			cout << "170";
		else if(n%6==1)
			cout << "020";
		else if(n%6==2)
			cout << "200";
		else if(n%6==3)
			cout << "110";
		else if(n%6==4)
			cout << "050";
		else if(n%6==5)
			cout << "080";
	}
}
