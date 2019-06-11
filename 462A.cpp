#include <iostream>

using namespace std;

int a[111][111];

int main (){
	int n;
	cin >> n;
	bool q=true;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j){
			char c;
			cin >> c;
			if (c=='o')
				a[i][j]=1;
			else
				a[i][j]=0;
		}
	for (int i=1;i<n-1;++i)
		for (int j=1;j<n-1;++j)
			if (a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]%2==1)
				q=false;
	if (a[0][1]+a[1][0]==1)
		q=false;
	if (a[0][n-2]+a[1][n-1]==1)
		q=false;
	if (a[n-2][0]+a[n-1][1]==1)
		q=false;
	if (a[n-1][n-2]+a[n-2][n-1]==1)
		q=false;
	for (int i=1;i<n-1;++i){
		if (a[0][i-1]+a[0][i+1]+a[1][i]%2==1)
			q=false;
		if (a[n-1][i-1]+a[n-1][i+1]+a[n-2][i]%2==1)
			q=false;
		if (a[i-1][0]+a[i+1][0]+a[i][1]%2==1)
			q=false;
		if (a[i-1][n-1]+a[i+1][n-1]+a[i][n-2]%2==1)
			q=false;
	}
	if (q==true)
		cout << "YES";
	else
		cout << "NO";
}