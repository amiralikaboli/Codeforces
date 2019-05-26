#include <bits/stdc++.h>

using namespace std;

vector <int> ans;

int main(){
	int a,b,n;
	cin >> a >> b >> n;
	int t=a%b;
	ans.push_back(a);
	for (int i=0;i<n;++i){
		t*=10;
		t%=b;
		int x=(b-t)%b;
		if (x>=10){
			cout << -1;
			return 0;
		}
		ans.push_back(x);
		t+=x;
		t%=b;
	}
	for (int i=0;i<ans.size();++i)
		cout << ans[i];
}