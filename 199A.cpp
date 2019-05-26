#include <iostream>

using namespace std;

long long fib[50];

int main (){
	long longs n;
	cin >> n;
	fib[1]=1;
	fib[2]=1;
	for (int i=3;i<=50;++i)
		fib[i]=fib[i-1]+fib[i-2];
	for (int i=0;i<=50;++i)
		for (int j=0;j<=50;++j)
			for (int l=0;l<=50;++l)
				if (fib[i]+fib[j]+fib[l]==n){
					cout << fib[i] << " " << fib[j] << " " << fib[l];
					return 0;
				}
	cout << "I'm too stupid to solve this problem";
}