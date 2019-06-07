#include <bits/stdc++.h>

using namespace std;

bool mark[10][10];

int main(){
	for (int i=1;i<=3;++i)
		for (int j=1;j<=3;++j)
			mark[i][j]=true;
	for (int i=1;i<=3;++i)
		for (int j=1;j<=3;++j){
			int x;
			cin >> x;
			x%=2;
			if (x==1){
				mark[i][j]=!mark[i][j];
				mark[i-1][j]=!mark[i-1][j];
				mark[i+1][j]=!mark[i+1][j];
				mark[i][j-1]=!mark[i][j-1];
				mark[i][j+1]=!mark[i][j+1];
			}
		}
	for (int i=1;i<=3;++i){
		for (int j=1;j<=3;++j)
			cout << mark[i][j];
		cout << endl;
	}
}