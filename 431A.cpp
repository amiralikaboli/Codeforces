#include <iostream>

using namespace std;

int a[5];

int main(){
	cin >> a[1] >> a[2] >> a[3] >> a[4];
	string s;
	cin >> s;
	long long ans=0;
	for (int i=0;i<s.size();++i)
		ans+=a[s[i]-'0'];
	cout << ans;
}