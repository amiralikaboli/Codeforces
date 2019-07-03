#include <bits/stdc++.h>

using namespace std;

const long long MaxN=1E5+10;
pair <long long,long long> p[MaxN];

int main(){
	long long n,d;
	cin >> n >> d;
	for (long long i=0;i<n;++i)
		cin >> p[i].first >> p[i].second;
	sort(p,p+n);
	long long ans=0,cnt=0;
	long long ind=0;
	for (long long i=0;i<n;++i){
		while (ind<n && p[ind].first-p[i].first<d){
			cnt+=p[ind].second;
			++ind;
		}
		ans=max(ans,cnt);
		cnt-=p[i].second;
	}
	cout << ans << endl;
}