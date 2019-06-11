#include <iostream>

using namespace std;

long long bmm(long long x,long long y){
	if (y==0)
		return x;
	bmm(y,x%y);
}

int main (){
	long long l,r;
	cin >> l >> r;
	for (long long a=l;a<=r;++a)
		for (long long b=a+1;b<=r;++b)
			for (long long c=b+1;c<=r;++c)
				if (bmm(a,b)==1 && bmm(b,c)==1 && bmm(a,c)>1){
					cout << a << " " << b << " " << c;
					return 0;
				}
	cout << -1;
}