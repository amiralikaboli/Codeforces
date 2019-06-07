#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	int num_s=0,num_t=0;
	for (int i=0;i<min(s.size(),t.size());++i){
		if (s[i]=='1')
			++num_s;
		if (t[i]=='1')
			++num_t;
	}
	if ((num_s==0 && num_t!=0) || (num_s!=0 && num_t==0) || s.size()!=t.size()){
		cout << "NO";
		return 0;
	}
	cout << "YES";
}