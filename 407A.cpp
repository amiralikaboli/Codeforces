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
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return cnt*cnt; else return n*cnt*cnt;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int a,b;
	cin >> a >> b;
	for(int i=1;i<a;++i)
		for(int j=1;j<b;++j){
			int fx=i;
			int fy=sqrt(a*a-i*i);
			int sx=j;
			int sy=sqrt(b*b-j*j);
			if (a*a==fx*fx+fy*fy && b*b==sx*sx+sy*sy && fx*sx==fy*sy){
				if(fy==sy){
					swap(fx,fy);
					swap(sx,sy);
				}
				cout << "YES" << endl << "0 0" << endl << fx << " " << fy << endl << -sx  << " " << sy;
				return 0;
			}
		}
	cout << "NO";
}