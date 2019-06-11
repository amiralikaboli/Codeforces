#include <bits/stdc++.h>

using namespace std;

vector <int> v;

void mgh(int x){
	for (int i=1;i*i<x;++i)
		if (x%i==0){
			v.push_back(i);
			v.push_back(x/i);
		}
	if (sqrt(x)==(int)sqrt(x))
		v.push_back(sqrt(x));
}

int main(){
	int a,b;
	cin >> a >> b;
	if (a<b){
		cout << 0;
		return 0;
	}
	if (a==b){
		cout << "infinity";
		return 0;
	}
	int x=a-b;
	mgh(x);
	int ans=v.size();
	for (int i=0;i<v.size();++i)
		if (v[i]<=b)
			--ans;
	cout << ans;
}