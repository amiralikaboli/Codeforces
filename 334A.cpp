#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[111];
vector <int> v[111];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		a[i]=i+1;
	for (int j=0;j<n;++j)
		for (int i=0;i<n;++i){
			v[i].push_back(j*n+a[i]);
			++a[i];
			if (a[i]!=n)
				a[i]%=n;
		}
	for (int i=0;i<n;++i){
		for (int j=0;j<n;++j)
			cout << v[i][j] << " ";
		cout << endl;
	}
}