#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int t[MaxN],ans[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> t[i];
	for (int i=0;i<n;++i){
		ans[i]+=t[i]*15;
		for (int j=0;j<t[i];++j){
			int x;
			cin >> x;
			ans[i]+=5*x;
		}
	}
	cout << *min_element(ans,ans+n);
}