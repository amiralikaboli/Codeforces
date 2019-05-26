#include <bits/stdc++.h>

using namespace std;

vector <int> v;

bool check(int x,int y){
	bool dx[10],dy[10];
	for (int i=0;i<10;++i)
		dx[i]=dy[i]=false;
	while(x){
		dx[x%10]=true;
		x/=10;
	}
	while(y){
		dy[y%10]=true;
		y/=10;
	}
	for (int i=0;i<10;++i)
		if (dx[i]==true && dy[i]==true)
			return true;
	return false;
}

int main(){
	int n;
	cin >> n;
	for (int i=1;i*i<=n;++i)
		if (n%i==0){
			v.push_back(i);
			if (i!=n/i)
				v.push_back(n/i);
		}
	int ans=0;
	for (int i=0;i<v.size();++i)
		ans+=check(v[i],n);
	cout << ans;
}