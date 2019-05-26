#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxN=50+10;
int a[MaxN],b[MaxN];
pii p[MaxN];

bool cmp(pii a,pii b){
	if (a.first==b.first)
		return a.second>b.second;
	return a.first>b.first;
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int m;
	cin >> m;
	for (int i=0;i<m;++i)
		cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	for (int i=0;i<n;++i)
		for (int j=1;j<=10*1000/a[i];++j){
			int ind=lower_bound(b,b+m,a[i]*j)-b;
			if (b[ind]==a[i]*j){
				p[i].first=j;
				p[i].second=0;
				for (int l=0;l<n;++l){
					ind=lower_bound(b,b+m,a[l]*j)-b;
					if (b[ind]==a[l]*j)
						++p[i].second;
				}
			}
		}
	sort(p,p+n,cmp);
	cout << p[0].second;
}