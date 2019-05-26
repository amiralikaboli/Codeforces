#include <iostream>

using namespace std;

int main (){
	int a,b,c;
	cin >> a >> b >> c;
	for (int i=1;i<=a;++i)
		if (a%i==0 && b%(a/i)==0 && i*i*b/a==c)
			cout << 4*(i+a/i+b*i/a);
}