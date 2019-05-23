#include <bits/stdc++.h>

using namespace std;

bool mark[15][15];

int main(){
	string rook,knight;
	cin >> rook >> knight;
	int xr=rook[0]-'a'+2,yr=rook[1]-'0'+1;
	int xk=knight[0]-'a'+2,yk=knight[1]-'0'+1;
	for (int i=0;i<10;++i){
		mark[xr][i]=true;
		mark[i][yr]=true;
	}
	mark[xr][yr]=true;
	mark[xk][yk]=true;
	mark[xr-2][yr-1]=mark[xr-1][yr-2]=mark[xr+1][yr+2]=mark[xr+2][yr+1]=true;
	mark[xr-2][yr+1]=mark[xr-1][yr+2]=mark[xr+1][yr-2]=mark[xr+2][yr-1]=true;
	mark[xk-2][yk-1]=mark[xk-1][yk-2]=mark[xk+1][yk+2]=mark[xk+2][yk+1]=true;
	mark[xk-2][yk+1]=mark[xk-1][yk+2]=mark[xk+1][yk-2]=mark[xk+2][yk-1]=true;
	int ans=64;
	for (int i=2;i<10;++i)
		for (int j=2;j<10;++j)
			if (mark[i][j])
				--ans;
	cout << ans;
}