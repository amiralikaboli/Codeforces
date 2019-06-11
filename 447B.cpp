#include <iostream>

using namespace std;

int w[30];

int main (){
	string s;
	int k;
	long long ans=0;
	cin >> s >> k;
	int mx=0;
	for (int i=0;i<26;++i){
		cin >> w[i];
		mx=max(mx,w[i]);
	}
	for (int i=0;i<s.size();++i)
		ans+=(i+1)*w[s[i]-'a'];
	ans+=mx*(k*s.size()+k*(k+1)/2);
	cout << ans;
}