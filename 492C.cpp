#include <bits/stdc++.h>

using namespace std;

const long long MaxN=1E5+10;
pair <long long,long long> p[MaxN];

int main(){
	long long n,r,avg;
	cin >> n >> r >> avg;
	long long sum=0;
	for (long long i=0;i<n;++i){
		cin >> p[i].second >> p[i].first;
		sum+=p[i].second;
	}
	sort(p,p+n);
	long long ind=0;
	long long ans=0;
	while (sum<avg*n){
		long long x=min(r-p[ind].second,n*avg-sum);
		ans+=x*p[ind].first;
		sum+=x;
		++ind;
	}
	cout << ans;
}