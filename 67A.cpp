#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];

int main(){
	int n;
	string s;
	cin >> n >> s;
	for (int i=0;i<n;++i){
		int l=i-1,r=i;
		int ans1=1,ans2=1;
		while (l>=0 && s[l]!='L'){
			if (s[l]=='R')
				++ans1;
			--l;
		}
		while (r<n-1 && s[r]!='R'){
			if (s[r]=='L')
				++ans2;
			++r;
		}
		cout << max(ans1,ans2) << " ";
	}
}