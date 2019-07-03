#include <bits/stdc++.h>

using namespace std;

const int MaxN=5E3+10;
int row[MaxN],col[MaxN];
int timrow[MaxN],timcol[MaxN];

int main(){
	int n,m,q;
	cin >> n >> m >> q;
	for (int t=0;t<q;++t){
		int kind;
		int ind,color;
		cin >> kind >> ind >> color;
		--ind;
		if (kind==1){
			row[ind]=color;
			timrow[ind]=t+1;
		}
		else{
			col[ind]=color;
			timcol[ind]=t+1;
		}
	}
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j)
			if (timrow[i]>timcol[j])
				cout << row[i] << " ";
			else if (timrow[i]<timcol[j])
				cout << col[j] << " ";
			else
				cout << "0 ";
		cout << endl;
	}
}