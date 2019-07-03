#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
bool boy[MaxN],girl[MaxN];

int main(){
	int b,g;
	cin >> b >> g;
	int t_b,t_g;
	cin >> t_b;	
	for (int i=0;i<t_b;++i){
		int x;
		cin >> x;
		boy[x]=true;
	}
	cin >> t_g;
	for (int i=0;i<t_g;++i){
		int x;
		cin >> x;
		girl[x]=true;
	}
	int cnt=t_b+t_g;
	for (int i=0;i<1E8;++i){
		if (cnt==b+g){
			cout << "Yes";
			return 0;
		}
		if (boy[i%b]+girl[i%g]==1){
			boy[i%b]=girl[i%g]=true;
			++cnt;
		}
	}
	cout << "No";
}