#include <iostream>
#include <algorithm>

using namespace std;

char c[55][55];
char cck[5];

int main (){
	int n,m,ans=0;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			cin >> c[i][j];
	for (int i=0;i<n-1;++i)
		for (int j=0;j<m-1;++j){
			cck[0]=c[i][j];
			cck[1]=c[i][j+1];
			cck[2]=c[i+1][j];
			cck[3]=c[i+1][j+1];
			sort(cck,cck+4);
			if (cck[0]=='a' && cck[1]=='c' && cck[2]=='e' && cck[3]=='f')
				++ans;
		}
	cout << ans;
}