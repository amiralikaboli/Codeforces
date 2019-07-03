#include <iostream>

using namespace std;

int ghm(int n){
	if (n>=0)
		return n;
	else
		return -n;
}

int main (){
	int v1,v2,t,d;
	long long ans=0;
	cin >> v1 >> v2 >> t >> d;
	int a=v1;
	int b=v2;
	v2=max(a,b);
	v1=min(a,b);
	t-=2;
	ans+=v2+v1;
	while (v2-v1>d){
		--t;
		v1+=d;
		ans+=v1;
	}
	int k1=(t+1)/2,k2=t/2;
	for (int i=0;i<k1;++i){
		v1+=d;
		ans+=v1;
	}
	for (int i=0;i<k2;++i){
		v2+=d;
		ans+=v2;
	}
	cout << ans;
}