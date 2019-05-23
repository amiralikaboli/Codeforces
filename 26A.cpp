#include <iostream>

using namespace std;

bool prime(int x){
	if (x==1)
		return false;
	for (int i=2;i*i<=x;++i)
		if (x%i==0)
			return false;
	return true;
}

bool find(int x){
	int t=0;
	for (int i=1;i*i<x;++i)
		if (x%i==0)
			t+=prime(i)+prime(x/i);
	if (t==2)
		return true;
	return false;	
}

int main(){
	int n;
	cin >> n;
	int ans=0;
	for (int i=1;i<=n;++i)
		if (find(i))
			++ans;
	cout << ans;
}