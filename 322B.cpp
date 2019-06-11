#include <bits/stdc++.h>

using namespace std;

int main(){
	int r,g,b;
	cin >> r >> g >> b;
	int tr=r%3,tg=g%3,tb=b%3;
	int ans1=min(tr,min(tg,tb))+r/3+g/3+b/3;
	if (tr==0 && r>=3){
		tr=3;
		r-=3;
	}
	if (tg==0 && g>=3){
		tg=3;
		g-=3;
	}
	if (tb==0 && b>=3){
		tb=3;
		b-=3;
	}
	int ans2=min(tr,min(tg,tb))+r/3+g/3+b/3;
	cout << max(ans1,ans2);
}