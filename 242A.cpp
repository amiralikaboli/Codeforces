#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

vector <pii> ans;

int main(){
	int x,y,a,b;
	cin >> x >> y >> a >> b;
	for (int i=a;i<=x;++i)
		for (int j=b;j<=y;++j)
			if (i>j)
				ans.push_back(pii(i,j));
	cout << ans.size() << endl;
	for (int i=0;i<ans.size();++i)
		cout << ans[i].first << " " << ans[i].second << endl;
}