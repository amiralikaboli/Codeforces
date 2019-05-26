#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
const int MaxAi=1E3+10;
int dp_one[MaxAi];
int dp_two[MaxAi][MaxAi];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		int x,y;
		cin >> x >> y;
		++dp_one[y];
		++dp_two[x][y];
	}
	int closed=0,beuty_close=0;
	for (int i=0;i<m;++i){
		int a,b;
		cin >> a >> b;
		if (dp_one[b]!=0){
			--dp_one[b];
			++closed;
		}
		if (dp_two[a][b]!=0){
			--dp_two[a][b];
			++beuty_close;
		}
	}
	cout << closed << " " << beuty_close;
}