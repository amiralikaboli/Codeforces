#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	int one_s=0,one_t=0;
	for(int i=0;i<s.size();++i)
		if(a[i]=='1')
			++one_s;
	for(int i=0;i<t.size();++i)
		if(b[i]=='1')
			++one_t;
	one_s=(one_t+1)/2*2;
	if(one_s>=one_t){
		cout << "YES";
	else
		cout << "NO";
}