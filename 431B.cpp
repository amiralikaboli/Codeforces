#include <bits/stdc++.h>

using namespace std;

int g[10][10];
int per[10];

int main(){
	long long ans=0;
	for (int i=0;i<5;++i)
		for (int j=0;j<5;++j)
			cin >> g[i][j];
	for (int i=0;i<5;++i)
		per[i]=i;
	for (int i=0;i<120;++i){
		long long cnt=0;
		cnt+=g[per[0]][per[1]]+g[per[1]][per[0]];
		cnt+=g[per[2]][per[3]]+g[per[3]][per[2]];
		cnt+=g[per[1]][per[2]]+g[per[2]][per[1]];
		cnt+=g[per[3]][per[4]]+g[per[4]][per[3]];
		cnt+=g[per[2]][per[3]]+g[per[3]][per[2]];
		cnt+=g[per[3]][per[4]]+g[per[4]][per[3]];
		ans=max(ans,cnt);
		next_permutation(per,per+5);
	}
	cout << ans;
}