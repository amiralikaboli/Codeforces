#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	for (long long i=0;i<n;++i){
		long long a,b;
		cin >> a >> b;
		long long t=0;
		while (a!=0){
			if (a>b)
				swap(a,b);
			t+=(b-a)/a;
			b=a+b%a;
			swap(a,b);
			a-=b;
			++t;
		}
		cout << t << endl;
	}
}