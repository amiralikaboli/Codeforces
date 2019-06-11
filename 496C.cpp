#include <bits/stdc++.h>

using namespace std;

const int MaxNM=100+10;
string s[MaxNM];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		cin >> s[i];
	int ans=0;
	for (int t=0;t<m;++t)
		for (int i=1;i<n;++i)
			if (s[i]<s[i-1])
				for (int j=0;j<m;++j)
					if (s[i][j]<s[i-1][j]){
						for (int l=0;l<n;++l)
							s[l][j]='.';
						++ans;
						break;
					}
	cout << ans;
}