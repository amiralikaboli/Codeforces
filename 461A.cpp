#include <iostream>
#include <algorithm>

using namespace std;

long long a[333333],s[333333];

bool cmp(int a,int b){
	return a>b;
}

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n,cmp);
	s[0]=a[0];
	for (int i=1;i<n;++i)
		s[i]=s[i-1]+a[i];
	long long ans=s[n-1];
	for (int i=1;i<n;++i)
		ans+=s[i];
	cout << ans;
}