#include <iostream>
#include <vector>

using namespace std;

int a[111111];
vector <int> v;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	v.push_back(0);
	for (int i=0;i<n-1;++i)
		if (a[i]>a[i+1])
			v.push_back(i+1);
	v.push_back(n);
	int mx=0;
	for (int i=0;i<v.size()-1;++i)
		mx=max(mx,v[i+1]-v[i]);
	cout << mx;
}