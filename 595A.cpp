#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int ans=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			bool a,b,s;
			cin >> a >> b;
			s=a+b;
			if (s!=0)
				++ans;
		}
	cout << ans;
}