#include <bits/stdc++.h>

using namespace std;

const long long MaxN=3E5+10;
long long a[MaxN];
bool mark[MaxN];
vector <long long> v,w;

long long ghadr(long long x){
	return max(x,-x);
}

int main(){
	long long n;
	cin >> n;
	for (long long i=0;i<n;++i)
		cin >> a[i];
	for (long long i=0;i<n;++i){
		if (a[i]<1 || a[i]>n)
			w.push_back(a[i]);
		else if (mark[a[i]]==true)
			w.push_back(a[i]);
		else
			mark[a[i]]=true;
	}
	for (long long i=1;i<=n;++i)
		if (mark[i]==false)
			v.push_back(i);
	sort(v.begin(),v.end());
	sort(w.begin(),w.end());
	long long ans=0;
	for (long long i=0;i<v.size();++i)
		ans+=ghadr(v[i]-w[i]);
	cout << ans;
}