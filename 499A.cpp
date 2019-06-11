#include <iostream>

using namespace std;

const int MaxN=50+5;
int s[MaxN],e[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	long long ans=0;
	for (int i=0;i<n;++i){
		cin >> s[i] >> e[i];
		ans+=e[i]-s[i]+1;
	}
	ans+=(s[0]-1)%k;
	for (int i=1;i<n;++i)
		ans+=(s[i]-e[i-1]-1)%k;
	cout << ans;
}