#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x=n;
	for (int i=n;i>=1;--i)
		if(x%i==0){
			cout << i << " ";
			x=i;
		}
}