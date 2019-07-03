#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
int b[MaxN];
vector <int> v;

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i=0;i<m;++i)
		cin >> b[i];
	sort(v.begin(),v.end());
	for (int i=0;i<m;++i)
		cout << upper_bound(v.begin(),v.end(),b[i])-v.begin() << " ";
}