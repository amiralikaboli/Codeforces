#include <bits/stdc++.h>

using namespace std;

const int MaxN=50+10;
int a[MaxN];

bool cmp(int a,int b){
	return a>b;
}

int32_t main(){
	int n,m,k;
	cin >> n >> m >> k;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n,cmp);
	int p=k,cnt=0;
	while(cnt<n && p<m){
		--p;
		p+=a[cnt];
		++cnt;
	}
	cout << (p<m ? -1 : cnt);
}