#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
char c[MaxN][MaxN];
bool mark[MaxN][MaxN];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> c[i][j];
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			for (int l=i+1;l<n;++l)
				if (c[i][j]==c[l][j])
					mark[i][j]=mark[l][j]=true;
			for (int l=j+1;l<m;++l)
				if (c[i][j]==c[i][l])
					mark[i][j]=mark[i][l]=true;
		}
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			if (mark[i][j]==false)
				cout << c[i][j];
}