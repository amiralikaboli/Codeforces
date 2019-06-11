#include <iostream>
#include <cmath>

using namespace std;

int bmm(int a,int b){
	if (b==0 || a==0)
		return max(a,b);
	bmm(b,a%b);
}

long long kmm(int a,int b){
	return a*b/bmm(a,b);
}

int main (){
	int a,b,s,e,ans=0;
	cin >> a >> b >> s >> e;
	double k=kmm(max(a,b),min(a,b));
	cout << int(floor(e/k)-ceil(s/k)+1);
}