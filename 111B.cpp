#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int last[MaxN];

int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;++i){
		int x,l;
		cin >> x >> l;
		int ans=0;
		for(int j=1;j*j<=x;++j)
			if(x%j==0){
				if (last[j]<i-l)
					++ans;
				if (j*j!=x && last[x/j]<i-l)
					++ans;
				last[j]=last[x/j]=i;
			}
		cout << ans << endl;
	}
}