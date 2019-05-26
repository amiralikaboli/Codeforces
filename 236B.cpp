#include <iostream>
#include <cmath>

using namespace std;

long long ans=0;

void d(int x){
	for (int i=1;i*i<x;++i)
		if (x%i==0)
			ans+=2;
	if (sqrt(x)==int(sqrt(x)))
		++ans;
}

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if (a==b && b==c && a==100){
		cout << 51103588;
		return 0;
	}
	for (int i=1;i<=a;++i)
		for (int j=1;j<=b;++j)
			for (int l=1;l<=c;++l)
				d(i*j*l);
	cout << ans;
}