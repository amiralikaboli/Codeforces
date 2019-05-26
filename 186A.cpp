#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	if (s.size()!=t.size()){
		cout << "NO";
		return 0;
	}
	char a,b;
	int cnt=0;
	for (int i=0;i<s.size();++i)
		if (s[i]!=t[i]){
			if (cnt==0){
				b=s[i];
				a=t[i];
			}
			else if (cnt==1 && (a!=s[i] || b!=t[i])){
				cout << "NO";
				return 0;
			}
			else if (cnt==2){
				cout << "NO";
				return 0;
			}
			++cnt;
		}
	if (cnt==1)
		cout << "NO";
	else
		cout << "YES";
}