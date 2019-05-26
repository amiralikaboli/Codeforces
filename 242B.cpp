#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
pair <int,int> p[MaxN];

int main(){
	int n;
	cin >> n;
	int mx=0,mn=1E9+7;
	for (int i=0;i<n;++i){
		cin >> p[i].first >> p[i].second;
		mx=max(mx,p[i].second);
		mn=min(mn,p[i].first);
	}
	for (int i=0;i<n;++i)
		if (mn==p[i].first && mx==p[i].second){
			cout << i+1;
			return 0;
		}
	cout << -1;
}