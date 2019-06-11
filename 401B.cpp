#include <bits/stdc++.h>

using namespace std;

const int MaxN=4E3+10;
bool mark[MaxN];

int main(){
	int x,k;
	cin >> x >> k;
	for (int i=0;i<k;++i){
		int p;
		cin >> p;
		if(p==1){
			int a,b;
			cin >> a >> b;
			mark[a]=true;
			mark[b]=true;
		}
		else{
			int a;
			cin >> a;
			mark[a]=true;
		}
	}
	int cnt=0;
	int mn=0,mx=0;
	for (int i=1;i<x;++i)
		if(mark[i]==true){
			mn+=(cnt+1)/2;
			cnt=0;
		}
		else{
			++cnt;
			++mx;
		}
	mn+=(cnt+1)/2;
	cout << mn << " " << mx;
}