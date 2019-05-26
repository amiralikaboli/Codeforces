#include <bits/stdc++.h>

using namespace std;

const int MaxNM=10+10;
char c[MaxNM][MaxNM];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> c[i][j];
	int p=0,w=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			if (c[i][j]=='P'){
				if (i!=0 && c[i-1][j]=='W')
					++p;
				else if (i!=n-1 && c[i+1][j]=='W')
					++p;
				else if (j!=0 && c[i][j-1]=='W')
					++p;
				else if (j!=m-1 && c[i][j+1]=='W')
					++p;
			}
			else if (c[i][j]=='W'){
				if (i!=0 && c[i-1][j]=='P')
					++w;
				else if (i!=n-1 && c[i+1][j]=='P')
					++w;
				else if (j!=0 && c[i][j-1]=='P')
					++w;
				else if (j!=m-1 && c[i][j+1]=='P')
					++w;
			}
		}
	cout << min(p,w);
}