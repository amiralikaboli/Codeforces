#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=2E5+10;
int one[MaxN],zero[MaxN];

int32_t main(){
	string s,t;
	cin >> s >> t;
	zero[0]=(t[0]=='0');
	one[0]=(t[0]=='1');
	for (int i=1;i<t.size();++i){
		zero[i]=zero[i-1]+(t[i]=='0');
		one[i]=one[i-1]+(t[i]=='1');
	}
	int la=s.size();
	int lb=t.size();
	int ans=0;
	if (s[0]=='0')
		ans=one[lb-la];
	else
		ans=zero[lb-la];
	for (int i=1;i<la;++i)
		if (s[i]=='0')
			ans+=one[lb-la+i]-one[i-1];
		else
			ans+=zero[lb-la+i]-zero[i-1];
	cout << ans;
}