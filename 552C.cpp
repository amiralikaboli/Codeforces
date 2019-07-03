#include <bits/stdc++.h>

using namespace std;

vector <int> d;

void mabna(int n,int w){
	int x=n;
	while (x){
		d.push_back(x%w);
		x/=w;
	}
	d.push_back(0);
}

int main(){
	int w,x;
	cin >> w >> x;
	mabna(x,w);
	for (int i=0;i<d.size();++i){
		if (d[i]!=0 && d[i]!=1 && d[i]!=w-1 && d[i]!=w){
			cout << "NO";
			return 0;
		}
		if (d[i]==w-1 || d[i]==w)
			++d[i+1];
	}
	cout << "YES";
}