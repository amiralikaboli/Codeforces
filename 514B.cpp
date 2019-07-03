#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
long double x[MaxN],y[MaxN];
bool mark[MaxN];

int main(){
	int n;
	cin >> n >> x[0] >> y[0];
	for (int i=1;i<=n;++i)
		cin >> x[i] >> y[i];
	int ans=0;
	bool r=false,c=false;
	for (int i=1;i<=n;++i)
		if (x[i]==x[0]){
			r=true;
			mark[i]=true;
		}
	for (int i=1;i<=n;++i)
		if (y[i]==y[0] && x[i]!=x[0]){
			c=true;
			mark[i]=true;
		}
	ans+=r+c;
	for (int i=1;i<=n;++i){
		if (mark[i]==false){
			for (int j=1;j<=n;++j)
				if ((y[i]-y[0])/(x[i]-x[0])==(y[j]-y[0])/(x[j]-x[0]) && y[j]!=y[0] && x[i]!=x[0])
					mark[j]=true;
			++ans;
		}
	}
	cout << ans << endl;
	return 0;
}