#include <bits/stdc++.h>

using namespace std;

char a[9] = {'6','7','8','9','T','J','Q','K','A'};

int main(){
	char c;
	cin >> c;
	string s,t;
	cin >> s >> t;
	if(s[1]==c && t[1]!=c){
		cout << "YES";
		return 0;
	}
	if(s[1]!=c && t[1]==c){
		cout << "NO";
		return 0;
	}
	if(s[1]!=t[1]){
		cout << "NO";
		return 0;
	}
	int ind_s,ind_t;
	for(int i=0;i<9;++i){
		if(s[0]==a[i])
			ind_s=i;
		if(t[0]==a[i])
			ind_t=i;
	}
	if (ind_s<ind_t)
		cout << "NO";
	else
		cout << "YES";
}
