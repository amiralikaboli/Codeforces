#include <iostream>

using namespace std;

int main (){
	int c[10];
	cin >> c[1] >> c[2] >> c[3] >> c[4] >> c[5];
	if ((c[1]+c[2]+c[3]+c[4]+c[5])%5!=0 || c[1]+c[2]+c[3]+c[4]+c[5]==0){
		cout << -1;
		return 0;
	}
	else
		cout << (c[1]+c[2]+c[3]+c[4]+c[5])/5;
}