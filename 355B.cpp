#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	int c1,c2,c3,c4;
	cin >> c1 >> c2 >> c3 >> c4;
	cin >> n >> m;
	int ans=0;
	int cnt=0;
	for(int i=0;i<n;++i){
		int a;
		cin >> a;
		cnt+=(a*c1<c2 ? a*c1 : c2);
	}
	cnt=min(cnt,c3);
	ans=cnt;
	cnt=0;
	for(int i=0;i<m;++i){
		int b;
		cin >> b;
		cnt+=(b*c1<c2 ? b*c1 : c2);
	}
	cnt=min(cnt,c3);
	ans+=cnt;
	cout << min(c4,ans);
}