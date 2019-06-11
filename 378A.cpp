#include <iostream>
#include <cmath>

using namespace std;

int f=0,s=0,d=0;

int main (){
	double a,b;
	cin >> a >> b;
	for (int i=1;i<=6;++i){
		if (abs(a-i)<abs(b-i))
			++f;
		else if (abs(a-i)>abs(b-i))
			++s;
		else
			++d;
	}
	cout << f << " " << d << " " << s;
}