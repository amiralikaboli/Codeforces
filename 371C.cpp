#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxR=1E13+10;

struct hamberger{
	int cur;
	int price;
	int need;
}bread,cheese,susage;

int32_t main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		if (s[i]=='B')
			++bread.need;
		else if (s[i]=='C')
			++cheese.need;
		else
			++susage.need;
	cin >> bread.cur >> susage.cur >> cheese.cur;
	cin >> bread.price >> susage.price >> cheese.price;
	int money;
	cin >> money;
	int l=0,r=MaxR;
	while (l<r){
		int mid=(l+r)/2;
		int cnt=money;
		cnt-=max(0LL,mid*bread.need-bread.cur)*bread.price;
		cnt-=max(0LL,mid*cheese.need-cheese.cur)*cheese.price;
		cnt-=max(0LL,mid*susage.need-susage.cur)*susage.price;
		if (cnt>=0)
			l=mid+1;
		else
			r=mid;
	}
	cout << --l;
}