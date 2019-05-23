#include <bits/stdc++.h>

using namespace std;

const int MaxN=50+10;
char c[MaxN][MaxN];

int main(){
	int n,m;
	cin >> n >> m;
	int ind_u=-1,ind_d=-1,ind_l=m,ind_r=-1;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			cin >> c[i][j];
			if (c[i][j]=='*'){
				if (ind_u==-1)
					ind_u=i;
				ind_d=i;
				ind_l=min(ind_l,j);
				ind_r=max(ind_r,j);
			}
		}
	for (int i=ind_u;i<=ind_d;++i){
		for (int j=ind_l;j<=ind_r;++j)
			cout << c[i][j];
		cout << endl;
	}
}