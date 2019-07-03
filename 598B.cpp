#include <bits/stdc++.h>

using namespace std;

char c[100*1000+10];

int main(){
	string s;
	cin >> s;
	int q;
	cin >> q;
	for (int i=0;i<q;++i){
		int f,e,k;
		cin >> f >> e >> k;
		--f;
		--e;
		int l=(e-f+1);
		//cerr << l << endl;
		k%=l;
		for (int j=0;j<l;++j)
			c[j]=s[j+f];
		for (int j=0;j<l;++j){
			s[(k+j)%l+f]=c[j];
			//cerr << j+f+1 << " " << (k+j)%l+f+1 << endl;
		}
		//cerr << s << endl;
	}
	cout << s;
}