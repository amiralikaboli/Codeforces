#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt_a=0,cnt_i=0;
	for (int i=0;i<s.size();++i){
		cnt_a+=(s[i]=='A');
		cnt_i+=(s[i]=='I');
	}
	if (cnt_i>1)
		cout << 0;
	else if (cnt_i==1)
		cout << 1;
	else
		cout << cnt_a;
}