#include <bits/stdc++.h>

using namespace std;

const int MaxN=3E3+10;
int a[MaxN];
pair <int,int> p[MaxN];
vector < pair <int,int> > v;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		p[i].first=a[i];
		p[i].second=i;
	}
	sort(p,p+n);
	for (int i=0;i<n;++i)
		a[p[i].second]=i;
	for (int i=0;i<n;++i)
		if (a[i]!=i)
			for (int j=0;j<n;++j)
				if (i==a[j]){
					swap(a[i],a[j]);
					v.push_back(make_pair(i,j));
				}
	cout << v.size() << endl;
	for (int i=0;i<v.size();++i)
		cout << v[i].first << " " << v[i].second << endl;
}