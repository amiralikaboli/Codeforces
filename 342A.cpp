#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
int t[10];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		++t[a[i]];
	}
	if (t[5]!=0 || t[7]!=0){
		cout << -1;
		return 0;
	}
	if (t[1]!=n/3){
		cout <<  -1;
		return 0;
	}
	int x=t[4];
	cerr << x << " ";
	int y=t[2]-x;
	cerr << y << " ";
	int z=t[3];
	cerr << z << endl;
	if (t[6]!=y+z){
		cout << -1;
		return 0;
	}
	if (x<0 || y<0 || z<0){
		cout << -1;
		return 0;
	}
	for (int i=0;i<x;++i)
		cout << "1 2 4" << endl;
	for (int i=0;i<y;++i)
		cout << "1 2 6" << endl;
	for (int i=0;i<z;++i)
		cout << "1 3 6" << endl;
}