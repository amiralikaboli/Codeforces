#include <bits/stdc++.h>

using namespace std;

const int INF=1E9+7;

int f(int a,int b){
	if (a==0)
		return INF;
	if (a==1 && b==1)
		return 0;
	if (a<b)
		swap(a,b);
	return f(a-b,b)+1;
}
int main(){
	int n;
	cin >> n;
	if (n==1){
		cout << 0;
		return 0;
	}
	int ans=INF;
	for (int i=1;i<n;++i)
		ans=min(ans,f(n,i));
	cout << ans;
}