#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int f=0;f<n;++f)
		for (int d=1;d<=n;++d){
			int cnt=0;
			for (int i=f;i<n;i+=d){
				if (s[i]=='.')
					break;
				++cnt;
			}
			if (cnt>=5){
				cout << "yes";
				return 0;
			}
		}
	cout << "no";
}