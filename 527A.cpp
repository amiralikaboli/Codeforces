#include <iostream>

using namespace std;

long long ans(long long a,long long b){
	if (b==1)
		return a;
	if (b==0)
		return 0;
	return ans(b,a%b)+a/b;
}

int main (){
	long long a,b;
	cin >> a >> b;
	cout << ans(a,b);
}