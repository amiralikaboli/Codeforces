#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=1E6+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int row[MaxN],col[MaxN];
int table[MaxN];

int bpow(int n,int k){ if(k==0) return 1; int cnt=bpow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*bpow(n,k-1))%MOD;}

struct cell{
	int num;
	int x;
	int y;
}a[MaxN];

bool cmp(cell a,cell b){
	return a.num<b.num;
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n*m;++i){
		cin >> a[i].num;
		a[i].x=i/m;
		a[i].y=i%m;
	}
	sort(a,a+n*m,cmp);
	for (int i=0;i<n*m;++i)
		table[a[i].x*m+a[i].y]=row[a[i].x]=col[a[i].y]=max(row[a[i].x],col[a[i].y])+1;
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j)
			cout << table[i*m+j] << " ";
		cout << endl;
	}
}