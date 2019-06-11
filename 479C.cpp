#include <bits/stdc++.h>

using namespace std;

const int MaxN=5E3+10;
int a[MaxN],b[MaxN];
pair <int,int> p[MaxN];
vector <int> v;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i] >> b[i];
		p[i].first=a[i];
		p[i].second=b[i];
	}
	sort(p,p+n);
	v.push_back(p[0].second);
	//cerr << v[v.size()-1] << " ";
	for (int i=1;i<n;++i){
		if (p[i].second<v[v.size()-1])
			v.push_back(p[i].first);
		else
			v.push_back(p[i].second);
		//cerr << v[v.size()-1] << " ";
	}
	cout << v[v.size()-1];
}