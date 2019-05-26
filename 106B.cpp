#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int spd[MaxN],ram[MaxN],hdd[MaxN],cost[MaxN];
bool mark[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> spd[i] >> ram[i] >> hdd[i] >> cost[i];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (spd[i]>spd[j] && ram[i]>ram[j] && hdd[i]>hdd[j])
				mark[j]=true;
	int mn=1E9+7;
	int ind;
	for (int i=0;i<n;++i)
		if (mark[i]==false && mn>cost[i]){
			mn=cost[i];
			ind=i;
		}
	cout << ind+1;
}