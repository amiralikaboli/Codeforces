#include <bits/stdc++.h>

using namespace std;

const int MaxNK=1E5+10;
int t[MaxNK];
vector <int> m[MaxNK];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<k;++i){
		cin >> t[i];
		for (int j=0;j<t[i];++j){
			int x;
			cin >> x;
			m[i].push_back(x);
		}
	}
	int ans=n-1+n-k;
	for (int i=0;i<k;++i){
		int ind=0;
		while (m[i][ind]==ind+1)
			++ind;
		if (ind>=1)
			ans-=2*ind-2;
	}
	cout << ans;
}