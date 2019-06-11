#include <bits/stdc++.h>

using namespace std;

const int MaxM=3E3+10;
int d[MaxM];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<m;++i)
		cin >> d[i];
	sort(d,d+m);
	for (int i=2;i<m;++i)
		if (d[i]==d[i-1]+1 && d[i-1]==d[i-2]+1){
			cout << "NO";
			return 0;
		}
	if (d[m-1]==n || d[0]==1){
		cout << "NO";
		return 0;
	}
	cout << "YES";
}