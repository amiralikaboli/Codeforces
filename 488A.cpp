#include <iostream>
#include <cmath>

using namespace std;

bool check(int n){
	int x=n;
	while (x!=0){
		if (x%10==8 || x%10==-8)
			return true;
		x/=10;
	}
	return false;
}

int main (){
	int n;
	cin >> n;
	for (int i=1;i<20;++i)
		if (check(n+i)==true){
			cout << i;
			return 0;
		}
}