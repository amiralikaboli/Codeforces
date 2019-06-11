#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[111111],s[111111];
vector <int> v;

int main (){
	int n;
	cin >> n;
	cin >> a[0];
	s[0]=a[0];
	for (int i=1;i<n;++i){
		cin >> a[i];
		s[i]=a[i];
		if (a[i]<a[i-1])
			v.push_back(i);
	}
	if (v.size()==0){
		cout << 0;
		return 0;
	}
	if (v.size()>1){
		cout << -1;
		return 0;
	}
	sort(s,s+n);
	for (int i=v[0];i<n+v[0];++i)
		if (a[i%n]!=s[i-v[0]]){
			cout << -1;
			return 0;
		}
	cout << n-v[0];
}