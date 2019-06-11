#include <iostream>

using namespace std;

long long d[10000],s[10000];

int main (){
	int n;
	cin >> n;
	d[1]=1;
	s[1]=1;
	for (int i=2;i<10000;++i){
		d[i]=d[i-1]+i;
		s[i]=s[i-1]+d[i];
	}
	for (int i=0;i<10000;++i)
		if (s[i]>n){
			cout << i-1;
			return 0;
		}
}