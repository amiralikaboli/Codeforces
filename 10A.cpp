#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=100+10;
int l[MaxN],r[MaxN];

int32_t main(){
	int n,p1,p2,p3,t1,t2;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int ans=0;
	for (int i=0;i<n;++i){
		cin >> l[i] >> r[i];
		ans+=p1*(r[i]-l[i]);
	}
	for (int i=1;i<n;++i){
		int min=l[i]-r[i-1];
		if (min<t1)
			ans+=p1*min;
		else if (min<t1+t2){
			ans+=p1*t1;
			ans+=p2*(min-t1);
		}
		else if (min>=t1+t2){
			ans+=p1*t1;
			ans+=p2*t2;
			ans+=p3*(min-t1-t2);
		}
	}
	cout << ans;
}