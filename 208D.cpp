#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=50+10;
int p[MaxN];

int32_t main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> p[i];
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	int money=0;
	int ta=0,tb=0,tc=0,td=0,te=0;
	for (int i=0;i<n;++i){
		money+=p[i];
		te+=money/e;
		money%=e;
		td+=money/d;
		money%=d;
		tc+=money/c;
		money%=c;
		tb+=money/b;
		money%=b;
		ta+=money/a;
		money%=a;
	}
	cout << ta << " " << tb << " " << tc << " " << td << " " << te << endl << money;
}