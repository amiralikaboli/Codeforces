#include <bits/stdc++.h>

using namespace std;

string a,b;

bool f(int s,int e,int sh,int p){
	if (e-s==1){
		if (a[s]==b[sh])
			return true;
		return false;
	}
	bool mark=true;
	for (int i=0;i<e-s;++i)
		if (a[s+i]!=b[sh+i])
			mark=false;
	if (mark)
		return true;
	if ((e-s)%2)
		return false;
	int mid_a=(s+e)/2;
	int mid_b=(sh+p)/2;
	if (f(s,mid_a,sh,mid_b) && f(mid_a,e,mid_b,p))
		return true;
	if (f(s,mid_a,mid_b,p) && f(mid_a,e,sh,mid_b))
		return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin >> a >> b;
	if (f(0,a.size(),0,b.size()))
		cout << "YES";
	else
		cout << "NO";
}