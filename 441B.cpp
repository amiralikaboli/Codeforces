#include <bits/stdc++.h>

using namespace std;

const int MaxN=3E3+10;
int a[MaxN],b[MaxN];
vector <int> rep[MaxN];

int main(){
	int n,v;
	cin >> n >> v;
	for (int i=0;i<n;++i){
		cin >> a[i] >> b[i];
		rep[a[i]].push_back(i);
	}
	long long ans=0;
	for (int i=1;i<3000+10;++i){
		int t=v;
		for (int j=0;j<rep[i-1].size();++j){
			int x=min(t,b[rep[i-1][j]]);
			ans+=x;
			t-=x;
			b[rep[i-1][j]]-=x;
		}
		for (int j=0;j<rep[i].size();++j){
			int x=min(t,b[rep[i][j]]);
			ans+=x;
			b[rep[i][j]]-=x;
			t-=x;
		}
		/*for (int j=0;j<n;++j)
			cerr << b[j] << " ";
		cerr << endl;*/
	}
	cout << ans;
}