#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=2E3+10;
int x[MaxN],y[MaxN];
bool mark[MaxN][MaxN];

int32_t main(){
	int n;
	cin >> n;
	int x1,x2,y1,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	for (int i=0;i<n;++i)
		cin >> x[i] >> y[i];
	int ans=0;
	for (int i=0;i<n;++i){
		int dx=x2-x[i];
		int dy=y2-y[i];
		int r=dx*dx+dy*dy;
		ans=max(ans,r);
	}
	for (int i=0;i<n;++i){
		int dx1=x1-x[i];
		int dy1=y1-y[i];
		int r1=dx1*dx1+dy1*dy1;
		for (int j=0;j<n;++j){
			dx1=x1-x[j];
			dy1=y1-y[j];
			int rj=dx1*dx1+dy1*dy1;
			if (rj<=r1)
				mark[i][j]=true;
		}
		int r2=0;
		for (int j=0;j<n;++j)
			if (mark[i][j]==false){
				int dx2=x2-x[j];
				int dy2=y2-y[j];
				int rj=dx2*dx2+dy2*dy2;
				r2=max(r2,rj);
			}
		ans=min(ans,r1+r2);
	}
	cout << ans;
}