#include <bits/stdc++.h>

using namespace std;

const int INF=1E9+7;

int main(){
	int n;
	cin >> n;
	int mx=-INF;
	string top_rate;
	for (int i=0;i<n;++i){
		string handle;
		int plus,minus;
		int a,b,c,d,e;
		cin >> handle;
		cin >> plus >> minus;
		cin >> a >> b >> c >> d >> e;
		int cnt=100*plus-50*minus;
		cnt+=a+b+c+d+e;
		if (mx<cnt){
			mx=cnt;
			top_rate=handle;
		}
	}
	cout << top_rate;
}