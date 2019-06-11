#include <iostream>
#include <cmath>

using namespace std;

int main (){
	double n,x,sum=0;
	cin >> n >> x;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		sum+=a;
	}
	cout << int((abs(sum)+x-1)/x);
}