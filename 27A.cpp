#include <bits/stdc++.h>

using namespace std;

const int MaxN=3E3+10;
bool mark[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		mark[x]=true;
	}
	for (int i=1;i<MaxN;++i)
		if (mark[i]==false){
			cout << i;
			return 0;
		}
}