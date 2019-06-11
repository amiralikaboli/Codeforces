#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
int t[5000+10];
vector <int> v,ans;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		++t[a[i]];
	}
	for (int i=0;i<5000+10;++i)
		if (t[i]!=0){
			v.push_back(i);
			ans.push_back(i);
		}
	for (int i=v.size()-2;i>=0;--i)
		if (t[v[i]]>1)
			ans.push_back(v[i]);
	cout << ans.size() << endl;
	for (int i=0;i<ans.size();++i)
		cout << ans[i] << " ";
}
