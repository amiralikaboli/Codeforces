#include <bits/stdc++.h>

using namespace std;

const int MaxNK=100+10;
bool mark[MaxNK];

int main(){
	int n,k;
	cin >> k >> n;
	for (int i=0;i<k;++i){
		int t;	
		cin >> t;
		for (int j=0;j<t;++j){
			int x;
			cin >> x;
			mark[x]=true;
		}
	}
	int cnt=0;
	for (int i=1;i<=n;++i)
		cnt+=mark[i];
	if (cnt==n)
		cout << "YES";
	else
		cout << "NO";
}