#include <iostream>

using namespace std;

int row[33],col[33];

int main (){
	int n,ans=0;
	cin >> n;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j){
			int a;
			cin >> a;
			row[i]+=a;
			col[j]+=a;
		}
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (col[j]>row[i])
				++ans;
	cout << ans;
}