#include <bits/stdc++.h>

using namespace std;

int a[10][10];
pair <int,int> p[10];

int main(){
	for (int i=0;i<3;++i)
		for (int j=0;j<3;++j)
			cin >> a[i][j];
	p[0]=make_pair(a[0][1]+a[0][2],0);
	p[1]=make_pair(a[1][0]+a[1][2],1);
	p[2]=make_pair(a[2][0]+a[2][1],2);
	sort(p,p+3);
	a[p[1].second][p[1].second]=p[0].first-p[1].first;
	a[p[2].second][p[2].second]=p[0].first-p[2].first;
	int x=p[2].first-a[p[1].second][p[1].second];
	x/=2;
	a[0][0]+=x;
	a[1][1]+=x;
	a[2][2]+=x;
	for (int i=0;i<3;++i){
		for (int j=0;j<3;++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}