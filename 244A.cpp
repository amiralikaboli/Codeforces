#include <bits/stdc++.h>

using namespace std;

const int MaxNK=30+10;
int a[MaxNK];
bool mark[MaxNK*MaxNK];
vector <int> ans[MaxNK];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<k;++i){
		cin >> a[i];
		--a[i];
		ans[i].push_back(a[i]);
		mark[a[i]]=true;
	}
	int ind=0;
	for (int i=0;i<k;++i)
		while (ans[i].size()!=n){
			if (mark[ind]==false)
				ans[i].push_back(ind);
			++ind;
		}
	for (int i=0;i<k;++i){
		for (int j=0;j<n;++j)
			cout << ans[i][j]+1 << " ";
		cout << endl;
	}
}