#include <bits/stdc++.h>

using namespace std;

int a[10];

int main(){
	for (int i=0;i<4;++i){
		string s;
		cin >> s;
		a[i]=s.size()-2;
	}
	int t=0;
	char ans;
	for (int i=0;i<4;++i){
		int cnt=0;
		for (int j=0;j<4;++j){
			if (a[i]>=2*a[j])
				++cnt;
			if (2*a[i]<=a[j])
				--cnt;
		}
		if (cnt==3 || cnt==-3){
			t++;
			ans='A'+i;
		}
	}
	if (t==1)
		cout << ans;
	else
		cout << "C";
	return 0;
}