#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	int last=0;
	for (int i=0;i<s.size();++i){
		int x=s[i];
		int num=0;
		for (int t=0;t<8;++t){
			num*=2;
			num+=x%2;
			x/=2;
		}
		cout << (last+256-num)%256 << endl;
		last=num;
	}
}