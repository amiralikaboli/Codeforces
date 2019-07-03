#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int x[MaxN],h[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin>> x[i] >> h[i];
	bool b=false;
	int ans=2-(n==1);
	for (int i=1;i<n-1;++i){
		if (b==false){
			if (h[i]<x[i]-x[i-1])
				++ans;
			else
				b=true;
		}
		if (b==true){
			if (h[i]<x[i+1]-x[i]){
				++ans;
				x[i]+=h[i];
			}
			b=false;
		}
	}
	cout << ans;
}
