#include <iostream>
#include <algorithm>

using namespace std;

int rate[2222];
pair <int,int> p[2222];

bool cmp(pair <int,int> a,pair <int,int> b){
	if (a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> p[i].first;
		p[i].second=i;
	}
	sort(p,p+n,cmp);
	rate[p[0].second]=1;
	for (int i=1;i<n;++i)
		if (p[i].first==p[i-1].first)
			rate[p[i].second]=rate[p[i-1].second];
		else
			rate[p[i].second]=i+1;
	for (int i=0;i<n;++i)
		cout << rate[i] << " "; 
}