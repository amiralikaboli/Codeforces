#include <bits/stdc++.h>

using namespace std;

int a[5][5];

int main(){
	int r1,r2,c1,c2,d1,d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	for (int i=1;i<10;++i)
		for (int j=1;j<10;++j){
			if (r1-i<0 || r2-j<0 || r1-i>9 || r2-j>9)
				continue;
			if (i==r1-i || i==j || i==r2-j || j==r1-i || j==r2-j || r1-i==r2-j)
				continue;
			a[0][0]=i;
			a[0][1]=r1-i;
			a[1][0]=j;
			a[1][1]=r2-j;
			//cerr << endl << a[0][0] << " " << a[0][1] << endl << a[1][0] << " " << a[1][1] << endl;
			if (a[0][0]+a[1][0]==c1 && a[0][1]+a[1][1]==c2 && a[0][0]+a[1][1]==d1 && a[0][1]+a[1][0]==d2){
				cout << a[0][0] << " " << a[0][1] << endl << a[1][0] << " " << a[1][1];
				return 0;
			}
		}
	cout << -1;
}