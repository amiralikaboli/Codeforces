#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define double long double
#define f first
#define s second
#define pii pair<int,int>
#define pci pair<char,int>
#define point complex<ld>

const int MaxN=1E5+10;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
vector <pci> v;

bool cmp(pci a,pci b){
	if (a.f==b.f)
		return a.s<b.s;
	return a.f>b.f;
}

int32_t main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		v.push_back(pci(s[i],i+1));
	sort(v.begin(),v.end(),cmp);
	int last_ind=0;
	for (int i=0;i<v.size();++i)
		if (v[i].s>last_ind){
			cout << v[i].f;
			last_ind=v[i].s;
		}
}