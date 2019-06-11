#include <bits/stdc++.h>

using namespace std;

bool b[15];

int main(){
	int n,k;
	cin >> n >> k;
	int ans=0;
	for 	(int i=0;i<n;++i){
		for (int j=0;j<10;++j)
			b[j]=false;
		string s;
		cin >> s;
		for (int j=0;j<s.size();++j)
			b[s[j]-'0']=true;
		bool h=true;
		for (int j=0;j<=k;++j)
			if (b[j]==false)
				h=false;
		if (h==true)
			++ans;
	}
	cout << ans;
}