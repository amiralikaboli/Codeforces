#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n,q;
	cin >> n >> q;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int s=0;
	for (int i=0;i<q;++i){
		int t;
		cin >> t;
		if (t==1){
			int ind,v;
			cin >> ind >> v;
			--ind;
			a[ind]=v-s;
		}
		else if (t==2){
			int v;
			cin >> v;
			s+=v;
		}
		else if (t==3){
			int ind;
			cin >> ind;
			--ind;
			cout << a[ind]+s << '\n';
		}
	}
}