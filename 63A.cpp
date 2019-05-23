#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
string s[MaxN];
pair <int,int> p[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		string t;
		cin >> s[i] >> t;
		if (t=="rat")
			p[i].first=0;
		else if (t=="woman" || t=="child")
			p[i].first=1;
		else if (t=="man")
			p[i].first=2;
		else if (t=="captain")
			p[i].first=3;
		p[i].second=i;
	}
	sort(p,p+n);
	for (int i=0;i<n;++i)
		cout << s[p[i].second] << endl;
}