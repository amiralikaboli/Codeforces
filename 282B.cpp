#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int dif=0;
	string ans="";
	for (int i=0;i<n;++i){
		int a,g;
		cin >> a >> g;
		if (dif+g>500){
			dif-=a;
			ans+='A';
		}
		else{
			dif+=g;
			ans+='G';
		}
	}
	cout << ans;
}