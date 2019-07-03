#include <iostream>

using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	int a=max(x,y);
	int b=min(x,y);
	cout << b << " " << (a-b)/2;
}