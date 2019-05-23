#include <bits/stdc++.h>

using namespace std;

int bmm(int a,int b){
	if (a<b){
		a=max(a,b);
		b=min(a,b);
	}
	if (b==0)
		return a;
	bmm(b,a%b);
}

int main(){
	double y,w;
	cin >> y >> w;
	double t=6-max(y,w)+1;
	cout << t/bmm(6,t) << "/" << 6/bmm(6,t);
}