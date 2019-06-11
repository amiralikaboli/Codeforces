#include <bits/stdc++.h>

using namespace std;

const int MaxP=100+10;
int c[MaxP];

int main(){
	int p;
	cin >> p;
	int sum=0;
	for (int i=0;i<p;++i){
		cin >> c[i];
		sum+=c[i];
	}
	int x,y;
	cin >> x >> y;
	int cnt=0;
	for (int i=0;i<p-1;++i){
		cnt+=c[i];
		if (cnt>=x && cnt<=y && sum-cnt>=x && sum-cnt<=y){
			cout << i+2;
			return 0;
		}
	}
	cout << 0;
}