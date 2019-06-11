#include <bits/stdc++.h>

using namespace std;

const int MaxL=100+10;
int h_x[MaxL],h_y[MaxL];

int main(){
	int x,y;
	string s;
	cin >> x >> y >> s;
	int dx=0,dy=0;
	for(int i=0;i<s.size();++i){
		if(s[i]=='L')
			--dx;
		if(s[i]=='R')
			++dx;
		if(s[i]=='D')
			--dy;
		if(s[i]=='U')
			++dy;
		h_x[i+1]=dx;
		h_y[i+1]=dy;
	}
	for(int i=0;i<=s.size();++i){
		int p=x-h_x[i];
		int q=y-h_y[i];
		int k=1;
		if(dx!=0)
			k=p/dx;
		if(dy!=0)
			k=q/dy;
		if(k>=0 && p==k*dx && q==k*dy){
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
	return 0;
}
