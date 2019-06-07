#include <bits/stdc++.h>

using namespace std;

const int MaxAll=100+10;
int bird[MaxAll];

int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;++i)
		cin >> bird[i];
	int q;
	cin >> q;
	for (int i=0;i<q;++i){
		int ind,wire;
		cin >> wire >> ind;
		bird[wire-1]+=ind-1;
		bird[wire+1]+=bird[wire]-ind;
		bird[wire]=0;
	}
	for (int i=1;i<=n;++i)
		cout << bird[i] << " ";
}